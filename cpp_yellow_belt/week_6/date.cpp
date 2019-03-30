#include "date.h"
#include <iostream>
#include <vector>

using namespace std;

ostream& operator<<(ostream& os, Date d) {
    os << d.GetYear() << "-" << d.GetMonth() << "-" << d.GetDay();
    return os;
}

bool operator<(const Date& lhs, const Date& rhs) {
    vector<int> lhs_ = {lhs.GetYear(), lhs.GetMonth(), lhs.GetDay()};
    vector<int> rhs_ = {rhs.GetYear(), rhs.GetMonth(), rhs.GetDay()};
    return (lhs_ < rhs_);
}

Date ParseDate(const istream& is) {
    return Date(1990,06,21);
}