	#pragma once
#include<map>
#include<set>
#include<string>
#include"Events.h"
#include"date.h"

using namespace std;

class Database {
public:
    void AddEvent(const Date& date, const string& event);

    void Print(ostream& cout) const;

    template <typename Predicate>
    int RemoveIf(Predicate predicate) {
        auto split_point = stable_partition(event_order_.begin(), event_order_.end(), predicate);
        int result = split_point - event_order_.begin();
        for (auto i = event_order_.begin(); i != split_point; ++i) {
            events_.erase(*i);
        }
        event_order_.erase(event_order_.begin(), split_point);

        return result;
    }





private:
    map<Date, Events> storage;
};
