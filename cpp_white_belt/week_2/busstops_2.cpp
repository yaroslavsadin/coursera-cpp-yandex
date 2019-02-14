#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main(void) {
    map <set<string>,int> route_to_num;
    int cmd_cnt;
    cin >> cmd_cnt;

    for(int i = cmd_cnt; i > 0; i--) {
        int num_stops;
        cin >> num_stops;
        set<string> stops;

        for(;num_stops > 0;num_stops--) {
            string stop;
            cin >> stop;
            stops.insert(stop);
        }

        if(route_to_num.count(stops)) {
            cout << "Already exists for " << route_to_num[stops] << endl;
        } else {
            int routes_cnt = route_to_num.size()+1;
            route_to_num[stops] = routes_cnt;
            cout << "New bus "  << routes_cnt << endl;
        }
    }

    return 0;
}