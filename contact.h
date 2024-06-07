/******************************************************
 * Program Name: Contact
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This header file defines a Contact class that stores and manages contact information.
 *******************************************************/

#ifndef LAB3_MANAGECONTACTS_CONTACT_H
#define LAB3_MANAGECONTACTS_CONTACT_H

#include "person.h"

using namespace std;

class Contact : public Person {
public:
    /******************************************************
     * Function Name: Contact (default constructor)
     * Purpose: Constructs a Contact object with default values.
     * Parameter: None
     * Return: None
     *******************************************************/
    Contact();

    /******************************************************
     * Function Name: Contact (constructor with parameters)
     * Purpose: Constructs a Contact object with given values.
     * Parameter: id, role, company, firstName, middleName, lastName, birthDate, address, city, county, state, zip, phone1, phone2, pronouns, email
     * Return: None
     *******************************************************/
    Contact(string id, string role, string company, string firstName, string middleName,
            string lastName, DateTime birthDate, string address, string city, string county,
            string state, string zip, string phone1, string phone2, string pronouns, string email);

    //Getter and Setter methods
    /******************************************************
     * Function Name: getId
     * Purpose: Returns the id of the contact.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getId();

    /******************************************************
     * Function Name: getRole
     * Purpose: Returns the role of the contact.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getRole();

    /******************************************************
     * Function Name: getCompany
     * Purpose: Returns the company of the contact.
     * Parameter: None
     * Return: string
     *******************************************************/
    string getCompany();

    /******************************************************
     * Function Name: setId
     * Purpose: Sets the id of the contact.
     * Parameter: id
     * Return: None
     *******************************************************/
    void setId(string id);

    /******************************************************
     * Function Name: setRole
     * Purpose: Sets the role of the contact.
     * Parameter: role
     * Return: None
     *******************************************************/
    void setRole(string role);

    /******************************************************
     * Function Name: setCompany
     * Purpose: Sets the company of the contact.
     * Parameter: company
     * Return: None
     *******************************************************/
    void setCompany(string company);

    //Overloaded operators
    /******************************************************
     * Function Name: operator>>
     * Purpose: Overloads the >> operator for Contact objects.
     * Parameter: istream& in, Contact& contact
     * Return: istream&
     *******************************************************/
    friend istream& operator>>(istream& in, Contact& contact);

    /******************************************************
     * Function Name: operator<<
     * Purpose: Overloads the << operator for Contact objects.
     * Parameter: ostream& out, const Contact& contact
     * Return: ostream&
     *******************************************************/
    friend ostream& operator<<(ostream& out, const Contact& contact);

    /******************************************************
     * Function Name: operator==
     * Purpose: Overloads the == operator for Contact objects.
     * Parameter: const Contact& contact
     * Return: bool
     *******************************************************/
    bool operator==(const Contact& contact);

    /******************************************************
     * Function Name: operator!=
     * Purpose: Overloads the != operator for Contact objects.
     * Parameter: const Contact& contact
     * Return: bool
     *******************************************************/
    bool operator!=(const Contact& contact);

    /******************************************************
     * Function Name: operator<
     * Purpose: Overloads the < operator for Contact objects.
     * Parameter: const Contact& contact
     * Return: bool
     *******************************************************/
    bool operator<(const Contact& contact);

    /******************************************************
     * Function Name: operator>
     * Purpose: Overloads the > operator for Contact objects.
     * Parameter: const Contact& contact
     * Return: bool
     *******************************************************/
    bool operator>(const Contact& contact);

    /******************************************************
     * Function Name: operator<=
     * Purpose: Overloads the <= operator for Contact objects.
     * Parameter: const Contact& contact
     * Return: bool
     *******************************************************/
    bool operator<=(const Contact& contact);

    /******************************************************
     * Function Name: operator>=
     * Purpose: Overloads the >= operator for Contact objects.
     * Parameter: const Contact& contact
     * Return: bool
     *******************************************************/
    bool operator>=(const Contact& contact);

private:
    string id;
    string role;
    string company;
};

#endif //LAB3_MANAGECONTACTS_CONTACT_H
