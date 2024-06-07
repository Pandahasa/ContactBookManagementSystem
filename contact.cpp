/******************************************************
 * Program Name: Contact
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This program defines a Contact class with various fields like name, address, phone number, etc.
 * It also includes methods for setting and getting these fields.
 *******************************************************/

#include "contact.h"
Contact::Contact() : Person() {
    id = "";
    role = "";
    company = "";
}

Contact::Contact(string id, string role, string company, string firstName, string middleName, string lastName,
                 DateTime birthDate, string address, string city, string county, string state, string zip,
                 string phone1, string phone2, string pronouns, string email) :
                 Person(firstName, middleName, lastName, birthDate, address, city, county, state,
                        zip, phone1, phone2, pronouns, email) {
    this->id = id;
    this->role = role;
    this->company = company;
}

string Contact::getId() {
    return id;
}

string Contact::getRole() {
    return role;
}

string Contact::getCompany() {
    return company;
}

void Contact::setId(string id) {
    this->id = id;
}

void Contact::setRole(string role) {
    this->role = role;
}

void Contact::setCompany(string company) {
    this->company = company;
}

istream &operator>>(istream &in, Contact &contact) {
    cout << "Enter the contact's ID: ";
    in >> contact.id;
    cout << "Enter the contact's role: ";
    in >> contact.role;
    cout << "Enter the contact's company: ";
    in >> contact.company;
    operator >>(in, static_cast<Person&>(contact));
    return in;
}

ostream &operator<<(ostream &out, const Contact &contact) {
    out << "ID: " << contact.id << endl;
    out << "Role: " << contact.role << endl;
    out << "Company: " << contact.company << endl;
    operator <<(out, static_cast<const Person&>(contact));
    return out;
}


bool Contact::operator==(const Contact &contact) {
    if (getField() == "id") {
        return id == contact.id;
    } else if (getField() == "role") {
        return role == contact.role;
    } else if (getField() == "company") {
        return company == contact.company;
    } else {
        return static_cast<Person>(*this) == static_cast<Person>(contact);
    }
}

bool Contact::operator!=(const Contact &contact) {
    return !(*this == contact);
}

bool Contact::operator<(const Contact &contact) {
    if (getField() == "id") {
        return id < contact.id;
    } else if (getField() == "role") {
        return role < contact.role;
    } else if (getField() == "company") {
        return company < contact.company;
    } else {
        return static_cast<Person>(*this) < static_cast<Person>(contact);
    }
}

bool Contact::operator>(const Contact &contact) {
    if (getField() == "id") {
        return id > contact.id;
    } else if (getField() == "role") {
        return role > contact.role;
    } else if (getField() == "company") {
        return company > contact.company;
    } else {
        return static_cast<Person>(*this) > static_cast<Person>(contact);
    }
}

bool Contact::operator<=(const Contact &contact) {
    return *this < contact || *this == contact;
}

bool Contact::operator>=(const Contact &contact) {
    return *this > contact || *this == contact;
}