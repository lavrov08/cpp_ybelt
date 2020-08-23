#include "database.h"
#include "date.h"


  void Database::AddEvent(const Date& date, const string& event) {
    storage[date].Add(event);
  }

    void Database::Print(ostream& cout) const {
        for (const auto& item : storage) {
            for (const string& event : item.second.GetAll()) {
                cout << item.first << " " << event << endl;
            }
        }
    }
