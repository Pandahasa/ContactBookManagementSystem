/******************************************************
 * Program Name: Person
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This program defines a Person class with various fields like name, address, phone number, etc.
 * It also includes methods for setting and getting these fields.
 *******************************************************/

#include "person.h"

Person::Person() {
    firstName = "";
    middleName = "";
    lastName = "";
    birthDate = DateTime();
    address = "";
    city = "";
    county = "";
    state = "";
    zip = "";
    phone1 = "";
    phone2 = "";
    pronouns = "";
    email = "";
}

Person::Person(string firstName, string middleName, string lastName, DateTime birthDate, string address, string city, string county, string state, string zip, string phone1, string phone2, string pronouns, string email) {
    this->firstName = firstName;
    this->middleName = middleName;
    this->lastName = lastName;
    this->birthDate = birthDate;
    this->address = address;
    this->city = city;
    this->county = county;
    this->state = state;
    this->zip = zip;
    this->phone1 = phone1;
    this->phone2 = phone2;
    this->pronouns = pronouns;
    this->email = email;
}

string Person::getFirstName() {
    return firstName;
}

string Person::getMiddleName() {
    return middleName;
}

string Person::getLastName() {
    return lastName;
}

DateTime Person::getBirthDate() {
    return birthDate;
}

string Person::getAddress() const {
    return address;
}

string Person::getCity() const {
    return city;
}

string Person::getCounty() const {
    return county;
}

string Person::getState() const {
    return state;
}

string Person::getZip() const {
    return zip;
}

string Person::getPhone1() const {
    return phone1;
}

string Person::getPhone2() const {
    return phone2;
}

string Person::getPronouns() const {
    return pronouns;
}

string Person::getEmail() const {
    return email;
}

string Person::getField() const {
    return field;
}

void Person::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Person::setMiddleName(string middleName) {
    this->middleName = middleName;
}

void Person::setLastName(string lastName) {
    this->lastName = lastName;
}

void Person::setBirthDate(DateTime birthDate) {
    this->birthDate = birthDate;
}

void Person::setAddress(string address) {
    this->address = address;
}

void Person::setCity(string city) {
    this->city = city;
}

void Person::setCounty(string county) {
    this->county = county;
}

void Person::setState(string state) {
    this->state = state;
}

void Person::setZip(string zip) {
    this->zip = zip;
}

void Person::setPhone1(string phone1) {
    this->phone1 = phone1;
}

void Person::setPhone2(string phone2) {
    this->phone2 = phone2;
}

void Person::setPronouns(string pronouns) {
    this->pronouns = pronouns;
}

void Person::setEmail(string email) {
    this->email = email;
}

void Person::setField(string field) {
    this->field = field;
}

istream &operator>>(istream &in, Person &person) {
    cout << "Enter first name: ";
    in >> person.firstName;
    cout << "Enter middle name: ";
    in >> person.middleName;
    cout << "Enter last name: ";
    in >> person.lastName;
    cout << "Enter birth date: ";
    in >> person.birthDate;
    cout << "Enter address: ";
    in >> person.address;
    cout << "Enter city: ";
    in >> person.city;
    cout << "Enter county: ";
    in >> person.county;
    cout << "Enter state: ";
    in >> person.state;
    cout << "Enter zip: ";
    in >> person.zip;
    cout << "Enter phone 1: ";
    in >> person.phone1;
    cout << "Enter phone 2: ";
    in >> person.phone2;
    cout << "Enter pronouns: ";
    in >> person.pronouns;
    cout << "Enter email: ";
    in >> person.email;
    return in;
}

ostream &operator<<(ostream &out, const Person &person) {
    out << "First Name: " << person.firstName << endl;
    out << "Middle Name: " << person.middleName << endl;
    out << "Last Name: " << person.lastName << endl;
    out << "Birth Date: " << person.birthDate.toString() << endl;
    out << "Address: " << person.address << endl;
    out << "City: " << person.city << endl;
    out << "County: " << person.county << endl;
    out << "State: " << person.state << endl;
    out << "Zip: " << person.zip << endl;
    out << "Phone 1: " << person.phone1 << endl;
    out << "Phone 2: " << person.phone2 << endl;
    out << "Pronouns: " << person.pronouns << endl;
    out << "Email: " << person.email << endl;
    return out;
}



bool Person::operator==(const Person &person) {
    if (field == "firstName") {
        return firstName == person.firstName;
    } else if (field == "middleName") {
        return middleName == person.middleName;
    } else if (field == "lastName") {
        return lastName == person.lastName;
    } else if (field == "birthDate") {
        return birthDate == person.birthDate;
    } else if (field == "address") {
        return address == person.address;
    } else if (field == "city") {
        return city == person.city;
    } else if (field == "county") {
        return county == person.county;
    } else if (field == "state") {
        return state == person.state;
    } else if (field == "zip") {
        return zip == person.zip;
    } else if (field == "phone1") {
        return phone1 == person.phone1;
    } else if (field == "phone2") {
        return phone2 == person.phone2;
    } else if (field == "pronouns") {
        return pronouns == person.pronouns;
    } else if (field == "email") {
        return email == person.email;
    }
    return false;
}

bool Person::operator!=(const Person &person) {
    return !(*this == person);
}

bool Person::operator<(const Person &person) {
    if (field == "firstName") {
        return firstName < person.firstName;
    } else if (field == "middleName") {
        return middleName < person.middleName;
    } else if (field == "lastName") {
        return lastName < person.lastName;
    } else if (field == "birthDate") {
        return birthDate < person.birthDate;
    } else if (field == "address") {
        return address < person.address;
    } else if (field == "city") {
        return city < person.city;
    } else if (field == "county") {
        return county < person.county;
    } else if (field == "state") {
        return state < person.state;
    } else if (field == "zip") {
        return zip < person.zip;
    } else if (field == "phone1") {
        return phone1 < person.phone1;
    } else if (field == "phone2") {
        return phone2 < person.phone2;
    } else if (field == "pronouns") {
        return pronouns < person.pronouns;
    } else if (field == "email") {
        return email < person.email;
    }
    return false;
}

bool Person::operator>(const Person &person) {
    if (field == "firstName") {
        return firstName > person.firstName;
    } else if (field == "middleName") {
        return middleName > person.middleName;
    } else if (field == "lastName") {
        return lastName > person.lastName;
    } else if (field == "birthDate") {
        return birthDate > person.birthDate;
    } else if (field == "address") {
        return address > person.address;
    } else if (field == "city") {
        return city > person.city;
    } else if (field == "county") {
        return county > person.county;
    } else if (field == "state") {
        return state > person.state;
    } else if (field == "zip") {
        return zip > person.zip;
    } else if (field == "phone1") {
        return phone1 > person.phone1;
    } else if (field == "phone2") {
        return phone2 > person.phone2;
    } else if (field == "pronouns") {
        return pronouns > person.pronouns;
    } else if (field == "email") {
        return email > person.email;
    }
    return false;
}

bool Person::operator<=(const Person &person) {
    return *this < person || *this == person;
}

bool Person::operator>=(const Person &person) {
    return *this > person || *this == person;
}