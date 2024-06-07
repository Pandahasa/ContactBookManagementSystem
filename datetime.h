//
// Created by Prateek Panda on 4/5/24.
//

#ifndef LAB3_MANAGECONTACTS_DATETIME_H
#define LAB3_MANAGECONTACTS_DATETIME_H


#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class DateTime {
public:
    DateTime();
    /**
     * DateTime constructor
     * @param month Month
     * @param day Day
     * @param year Year
     */
    DateTime(int month, int day, int year);
    ~DateTime();

    //getter and setter methods, rest are in time.h
    void setMonth(int month);
    int getMonth() const;
    void setDay(int day);
    int getDay() const;
    void setYear(int year);
    int getYear() const;

    //outputs string version of date in month/day/year
    string toString() const;
    friend istream& operator>>(istream& in, DateTime& dateTime);
    friend ostream& operator<<(ostream& out, DateTime& dateTime);

    //overloaded operators
    bool operator==(const DateTime& dateTime);
    bool operator!=(const DateTime& dateTime);
    bool operator<(const DateTime& dateTime);
    bool operator>(const DateTime& dateTime);
    bool operator<=(const DateTime& dateTime);
    bool operator>=(const DateTime& dateTime);
private:
    int month;
    int day;
    int year;
};


#endif //LAB3_MANAGECONTACTS_DATETIME_H
