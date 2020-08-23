#include "date.h"
#include<tuple>
#include<iomanip>

bool operator == (const Date& lhs, const Date& rhs) {
    return tie(lhs.year, lhs.month, lhs.day) == tie(rhs.year, rhs.month, rhs.day);
}

bool operator != (const Date& lhs, const Date& rhs) {
    return tie(lhs.year, lhs.month, lhs.day) != tie(rhs.year, rhs.month, rhs.day);
}

bool operator < (const Date& lhs, const Date& rhs) {
    return tie(lhs.year, lhs.month, lhs.day) < tie(rhs.year, rhs.month, rhs.day);
}

bool operator <= (const Date& lhs, const Date& rhs) {
    return tie(lhs.year, lhs.month, lhs.day) <= tie(rhs.year, rhs.month, rhs.day);
}

bool operator > (const Date& lhs, const Date& rhs) {
    return tie(lhs.year, lhs.month, lhs.day) > tie(rhs.year, rhs.month, rhs.day);
}

bool operator >= (const Date& lhs, const Date& rhs) {
    return tie(lhs.year, lhs.month, lhs.day) >= tie(rhs.year, rhs.month, rhs.day);
}

// даты будут по умолчанию выводиться в нужном формате
ostream& operator<<(ostream& stream, const Date& date) {
    stream << setw(4) << setfill('0') << date.year <<
        "-" << setw(2) << setfill('0') << date.month <<
        "-" << setw(2) << setfill('0') << date.day;
    return stream;
}


Date ParseDate(istream& is) {
    Date result;
    is >> result.year;
    is.ignore(1);
    is >> result.month;
    is.ignore(1);
    is >> result.day;
    return result;
}