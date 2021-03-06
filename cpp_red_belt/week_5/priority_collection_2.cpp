#include "test_runner.h"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <memory>
#include <set>
#include <utility>
#include <vector>
#include <queue>
#include <list>

using namespace std;

template <typename T>
class PriorityCollection {
private:
  struct Id_ {
    size_t num_id;
    typename list<T>::iterator it;
    bool operator<(const Id_& rhs) const {
      return num_id < rhs.num_id;
    }
  };
public:
  using Id = Id_/* тип, используемый для идентификаторов */;

  // Добавить объект с нулевым приоритетом
  // с помощью перемещения и вернуть его идентификатор
  Id Add(T object);

  // Добавить все элементы диапазона [range_begin, range_end)
  // с помощью перемещения, записав выданные им идентификаторы
  // в диапазон [ids_begin, ...)
  template <typename ObjInputIt, typename IdOutputIt>
  void Add(ObjInputIt range_begin, ObjInputIt range_end, IdOutputIt ids_begin) {
    for(auto it = range_begin; it != range_end; it++) {
      *(ids_begin++) = Add(move(*it));
    }
  }

  // Определить, принадлежит ли идентификатор какому-либо
  // хранящемуся в контейнере объекту
  bool IsValid(Id id) const {
    return ids.count(id);
  }

  // Получить объект по идентификатору
  const T& Get(Id id) const {
    return *(id.it);
  }

  // Увеличить приоритет объекта на 1
  void Promote(Id id) {
    int current_prio = id_to_prio[id]++;
    prio_to_ids[current_prio+1].insert(id);
    prio_to_ids[current_prio].erase(id);
    if(!prio_to_ids[current_prio].size()) {
      prio_to_ids.erase(current_prio);
    }
  }

  // Получить объект с максимальным приоритетом и его приоритет
  pair<const T&, int> GetMax() const {
    auto max_id_and_prio = GetMaxIdAndPrio();
    return {*max_id_and_prio.first.it,max_id_and_prio.second};
  }

  // Аналогично GetMax, но удаляет элемент из контейнера
  pair<T, int> PopMax() {
    auto max_id_and_prio = GetMaxIdAndPrio();
    size_t max_prio = max_id_and_prio.second;
    Id max_elem_id = max_id_and_prio.first;
    prio_to_ids[max_prio].erase(max_elem_id);
    if(!prio_to_ids[max_prio].size()) {
      prio_to_ids.erase(max_prio);
    }
    id_to_prio.erase(max_elem_id);
    ids.erase(max_elem_id);
    pair<T, int> res = {move(*max_elem_id.it),max_prio};
    data_.erase(max_elem_id.it);
    return res;
  }

private:
  // Приватные поля и методы
  list<T> data_;
  map<int,set<Id>> prio_to_ids;
  map<Id,int> id_to_prio;
  set<Id> ids;
  static size_t num_gen;
  pair<Id, size_t> GetMaxIdAndPrio() const {
    const pair<int,set<Id>> &latest = *prev(prio_to_ids.end());
    int max_prio = latest.first;
    Id max_elem_id = *prev(latest.second.end());
    return {max_elem_id,max_prio};
  }
};

template <typename T>
typename PriorityCollection<T>::Id PriorityCollection<T>::Add(T object) {
  data_.push_back(std::move(object));
  Id id = {
    .num_id = num_gen++, 
    .it = prev(data_.end())
  };
  prio_to_ids[0].insert(id);
  id_to_prio[id] = 0;
  ids.insert(id);
  return id;
}

template<typename T>
size_t PriorityCollection<T>::num_gen = 0;

class StringNonCopyable : public string {
public:
  using string::string;  // Позволяет использовать конструкторы строки
  StringNonCopyable(const StringNonCopyable&) = delete;
  StringNonCopyable(StringNonCopyable&&) = default;
  StringNonCopyable& operator=(const StringNonCopyable&) = delete;
  StringNonCopyable& operator=(StringNonCopyable&&) = default;
};

void TestNoCopy() {
  PriorityCollection<StringNonCopyable> strings;
  const auto white_id = strings.Add("white");
  const auto yellow_id = strings.Add("yellow");
  const auto red_id = strings.Add("red");

  strings.Promote(yellow_id);
  for (int i = 0; i < 2; ++i) {
    strings.Promote(red_id);
  }
  strings.Promote(yellow_id);
  {
    const auto item = strings.PopMax();
    ASSERT_EQUAL(item.first, "red");
    ASSERT_EQUAL(item.second, 2);
  }
  {
    const auto item = strings.PopMax();
    ASSERT_EQUAL(item.first, "yellow");
    ASSERT_EQUAL(item.second, 2);
  }
  {
    const auto item = strings.GetMax();
    ASSERT_EQUAL(item.first, "white");
    ASSERT_EQUAL(item.second, 0);
  }
}

int main() {
  TestRunner tr;
  RUN_TEST(tr, TestNoCopy);
  return 0;
}
