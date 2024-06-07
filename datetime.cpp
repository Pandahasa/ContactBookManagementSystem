/**
* Name: Prateek Panda
* Description: Contains information of the date and time and formats it
* Date: <4/1/2024>
*/
#include "datetime.h"

DateTime::DateTime() {
    month = 0;
    day = 0;
    year = 0;
}

DateTime::DateTime(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

DateTime::~DateTime()=default;

void DateTime::setMonth(int month) {
    this->month = month;
}

int DateTime::getMonth() const {
    return month;
}

void DateTime::setDay(int day) {
    this->day = day;
}

int DateTime::getDay() const {
    return day;
}

void DateTime::setYear(int year) {
    this->year = year;
}

int DateTime::getYear() const {
    return year;
}

string DateTime::toString() const {
    stringstream ss;
    ss << month << "/" << day << "/" << year;
    return ss.str();
}

istream &operator>>(istream &in, DateTime &dateTime) {
    cout << "Enter month: ";
    in >> dateTime.month;
    cout << "Enter day: ";
    in >> dateTime.day;
    cout << "Enter year: ";
    in >> dateTime.year;
    return in;
}

ostream &operator<<(ostream &out, DateTime &dateTime) {
    out << dateTime.toString();
    return out;
}

bool DateTime::operator==(const DateTime &dateTime) {
    return month == dateTime.month && day == dateTime.day && year == dateTime.year;
}

bool DateTime::operator!=(const DateTime &dateTime) {
    return month != dateTime.month || day != dateTime.day || year != dateTime.year;
}

bool DateTime::operator<(const DateTime &dateTime) {
    if (year < dateTime.year) {
        return true;
    } else if (year == dateTime.year && month < dateTime.month) {
        return true;
    } else if (year == dateTime.year && month == dateTime.month && day < dateTime.day) {
        return true;
    }
    return false;
}

bool DateTime::operator>(const DateTime &dateTime) {
    if (year > dateTime.year) {
        return true;
    } else if (year == dateTime.year && month > dateTime.month) {
        return true;
    } else if (year == dateTime.year && month == dateTime.month && day > dateTime.day) {
        return true;
    }
    return false;
}

bool DateTime::operator<=(const DateTime &dateTime) {
    return *this < dateTime || *this == dateTime;
}

bool DateTime::operator>=(const DateTime &dateTime) {
    return *this > dateTime || *this == dateTime;
}
