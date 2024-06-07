//
// Created by Prateek Panda on 4/5/24.
//

#ifndef LAB3_MANAGECONTACTS_PERSON_H
#define LAB3_MANAGECONTACTS_PERSON_H

#include <iostream>
#include "datetime.h"

using namespace std;

class Person {
public:
    /******************************************************
     * Function Name: Person (default constructor)
     * Purpose: Constructs a Person object with default values.
     * Parameter: None
     * Return: None
     *******************************************************/
    Person();

    /******************************************************
     * Function Name: Person (constructor with parameters)
     * Purpose: Constructs a Person object with given values.
     * Parameter: firstName, middleName, lastName, birthDate, address, city, county, state, zip, phone1, phone2, pronouns, email
     * Return: None
     *******************************************************/
    Person(string firstName, string middleName, string lastName, DateTime birthDate, string address, string city, string county, string state, string zip, string phone1, string phone2, string pronouns, string email);

    //Getter and setter methods
    /******************************************************
     * Function Name: getFirstName
     * Purpose: Returns the first name of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getFirstName();

    /******************************************************
     * Function Name: getMiddleName
     * Purpose: Returns the middle name of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getMiddleName();

    /******************************************************
     * Function Name: getLastName
     * Purpose: Returns the last name of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getLastName();

    /******************************************************
     * Function Name: getBirthDate
     * Purpose: Returns the birth date of the person.
     * Parameter: None
     * Return: DateTime
     *******************************************************/
    DateTime getBirthDate();

    /******************************************************
     * Function Name: getAddress
     * Purpose: Returns the address of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getAddress() const;

    /******************************************************
     * Function Name: getCity
     * Purpose: Returns the city of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getCity() const;

    /******************************************************
     * Function Name: getCounty
     * Purpose: Returns the county of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getCounty() const;

    /******************************************************
     * Function Name: getState
     * Purpose: Returns the state of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getState() const;

    /******************************************************
     * Function Name: getZip
     * Purpose: Returns the zip code of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getZip() const;

    /******************************************************
     * Function Name: getPhone1
     * Purpose: Returns the first phone number of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getPhone1() const;

    /******************************************************
     * Function Name: getPhone2
     * Purpose: Returns the second phone number of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getPhone2() const;

    /******************************************************
     * Function Name: getPronouns
     * Purpose: Returns the pronouns of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getPronouns() const;

    /******************************************************
     * Function Name: getEmail
     * Purpose: Returns the email of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getEmail() const;

    /******************************************************
     * Function Name: getField
     * Purpose: Returns the field of the person.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getField() const;

    /******************************************************
     * Function Name: setFirstName
     * Purpose: Sets the first name of the person.
     * Parameter: firstName
     * Return: None
     *******************************************************/
    void setFirstName(string firstName);

    /******************************************************
     * Function Name: setMiddleName
     * Purpose: Sets the middle name of the person.
     * Parameter: middleName
     * Return: None
     *******************************************************/
    void setMiddleName(string middleName);

    /******************************************************
     * Function Name: setLastName
     * Purpose: Sets the last name of the person.
     * Parameter: lastName
     * Return: None
     *******************************************************/
    void setLastName(string lastName);

    /******************************************************
     * Function Name: setBirthDate
     * Purpose: Sets the birth date of the person.
     * Parameter: birthDate
     * Return: None
     *******************************************************/
    void setBirthDate(DateTime birthDate);

    /******************************************************
     * Function Name: setAddress
     * Purpose: Sets the address of the person.
     * Parameter: address
     * Return: None
     *******************************************************/
    void setAddress(string address);

    /******************************************************
     * Function Name: setCity
     * Purpose: Sets the city of the person.
     * Parameter: city
     * Return: None
     *******************************************************/
    void setCity(string city);

    /******************************************************
     * Function Name: setCounty
     * Purpose: Sets the county of the person.
     * Parameter: county
     * Return: None
     *******************************************************/
    void setCounty(string county);

    /******************************************************
     * Function Name: setState
     * Purpose: Sets the state of the person.
     * Parameter: state
     * Return: None
     *******************************************************/
    void setState(string state);

    /******************************************************
     * Function Name: setZip
     * Purpose: Sets the zip code of the person.
     * Parameter: zip
     * Return: None
     *******************************************************/
    void setZip(string zip);

    /******************************************************
     * Function Name: setPhone1
     * Purpose: Sets the first phone number of the person.
     * Parameter: phone1
     * Return: None
     *******************************************************/
    void setPhone1(string phone1);

    /******************************************************
     * Function Name: setPhone2
     * Purpose: Sets the second phone number of the person.
     * Parameter: phone2
     * Return: None
     *******************************************************/
    void setPhone2(string phone2);

    /******************************************************
     * Function Name: setPronouns
     * Purpose: Sets the pronouns of the person.
     * Parameter: pronouns
     * Return: None
     *******************************************************/
    void setPronouns(string pronouns);

    /******************************************************
     * Function Name: setEmail
     * Purpose: Sets the email of the person.
     * Parameter: email
     * Return: None
     *******************************************************/
    void setEmail(string email);

    /******************************************************
     * Function Name: setField
     * Purpose: Sets the field of the person.
     * Parameter: field
     * Return: None
     *******************************************************/
    void setField(string field);

    //Overloaded operators
    /******************************************************
     * Function Name: operator>>
     * Purpose: Overloads the >> operator for Person objects.
     * Parameter: istream& in, Person& person
     * Return: istream&
     *******************************************************/
    friend istream& operator>>(istream& in, Person& person);

    /******************************************************
     * Function Name: operator<<
     * Purpose: Overloads the << operator for Person objects.
     * Parameter: ostream& out, const Person& person
     * Return: ostream&
     *******************************************************/
    friend ostream& operator<<(ostream& out, const Person& person);

    /******************************************************
     * Function Name: operator==
     * Purpose: Overloads the == operator for Person objects.
     * Parameter: const Person& person
     * Return: bool
     *******************************************************/
    bool operator==(const Person& person);

    /******************************************************
     * Function Name: operator!=
     * Purpose: Overloads the != operator for Person objects.
     * Parameter: const Person& person
     * Return: bool
     *******************************************************/
    bool operator!=(const Person& person);

    /******************************************************
     * Function Name: operator<
     * Purpose: Overloads the < operator for Person objects.
     * Parameter: const Person& person
     * Return: bool
     *******************************************************/
    bool operator<(const Person& person);

    /******************************************************
     * Function Name: operator>
     * Purpose: Overloads the > operator for Person objects.
     * Parameter: const Person& person
     * Return: bool
     *******************************************************/
    bool operator>(const Person& person);

    /******************************************************
     * Function Name: operator<=
     * Purpose: Overloads the <= operator for Person objects.
     * Parameter: const Person& person
     * Return: bool
     *******************************************************/
    bool operator<=(const Person& person);

    /******************************************************
     * Function Name: operator>=
     * Purpose: Overloads the >= operator for Person objects.
     * Parameter: const Person& person
     * Return: bool
     *******************************************************/
    bool operator>=(const Person& person);

private:
    string firstName;
    string middleName;
    string lastName;
    DateTime birthDate;
    string address;
    string city;
    string county;
    string state;
    string zip;
    string phone1;
    string phone2;
    string pronouns;
    string email;
    string field = "firstName";
};


#endif //LAB3_MANAGECONTACTS_PERSON_H
