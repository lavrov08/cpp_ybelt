#pragma once

#include <algorithm>
#include <string>
#include <set>
#include <vector>
#include "Events.h"

using namespace std;


void Events::Add(const string& event) {
    if (events_set.count(event) == 0) {
        events_list.push_back(event);
        events_set.insert(event);
    }
}


const vector<string>& Events::GetAll() const {
    return events_list;
}
