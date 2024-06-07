/******************************************************
 * Program Name: ContactList
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This header file defines a ContactList class that manages a list of Contact objects.
 *******************************************************/

#ifndef LAB3_MANAGECONTACTS_CONTACTLIST_H
#define LAB3_MANAGECONTACTS_CONTACTLIST_H

#include "linkedlist.h"
#include "contact.h"
#include <fstream>
#include <sstream>


class ContactList : public LinkedList<Contact> {
public:
    /******************************************************
     * Function Name: ContactList (default constructor)
     * Purpose: Constructs a ContactList object with default values.
     * Parameter: None
     * Return: None
     *******************************************************/
    ContactList();

    /******************************************************
     * Function Name: initData
     * Purpose: Initializes the data for the ContactList.
     * Parameter: None
     * Return: None
     *******************************************************/
    void initData();

    /******************************************************
     * Function Name: doList
     * Purpose: Lists the contacts in the ContactList.
     * Parameter: ascending
     * Return: None
     *******************************************************/
    void doList(bool ascending);

    /******************************************************
     * Function Name: doSortBy
     * Purpose: Sorts the contacts in the ContactList by a specific field.
     * Parameter: field
     * Return: None
     *******************************************************/
    void doSortBy(string field);

    /******************************************************
     * Function Name: doView
     * Purpose: Views the contacts in the ContactList.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doView();

    /******************************************************
     * Function Name: doAdd
     * Purpose: Adds a contact to the ContactList.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doAdd();

    /******************************************************
     * Function Name: doEdit
     * Purpose: Edits a contact in the ContactList.
     * Parameter: location, ascending
     * Return: None
     *******************************************************/
    void doEdit(int location, bool ascending);

    /******************************************************
     * Function Name: doDelete
     * Purpose: Deletes a contact from the ContactList.
     * Parameter: location, ascending
     * Return: None
     *******************************************************/
    void doDelete(int location, bool ascending);

    /******************************************************
     * Function Name: doExit
     * Purpose: Exits the ContactList.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doExit();

    /******************************************************
     * Function Name: moveFirst
     * Purpose: Moves to the first contact in the ContactList.
     * Parameter: None
     * Return: Iterator<Contact>
     *******************************************************/
    Iterator<Contact> moveFirst();

    /******************************************************
     * Function Name: moveLast
     * Purpose: Moves to the last contact in the ContactList.
     * Parameter: None
     * Return: Iterator<Contact>
     *******************************************************/
    Iterator<Contact> moveLast();

    /******************************************************
     * Function Name: moveNext
     * Purpose: Moves to the next contact in the ContactList.
     * Parameter: it
     * Return: Iterator<Contact>
     *******************************************************/
    Iterator<Contact> moveNext(Iterator<Contact> it, int &n);

    /******************************************************
     * Function Name: movePrevious
     * Purpose: Moves to the previous contact in the ContactList.
     * Parameter: it
     * Return: Iterator<Contact>
     *******************************************************/
    Iterator<Contact> movePrevious(Iterator<Contact> it, int &n);

    /******************************************************
     * Function Name: getContact
     * Purpose: Gets a contact from the ContactList.
     * Parameter: location, ascending
     * Return: Contact
     *******************************************************/
    Contact getContact(int location, bool ascending);

    /******************************************************
     * Function Name: getContactRef
     * Purpose: Gets a reference to a contact in the ContactList.
     * Parameter: location, ascending
     * Return: Contact&
     *******************************************************/
    Contact& getContactRef(int location, bool ascending);

private:
    fstream inFile;
};


#endif //LAB3_MANAGECONTACTS_CONTACTLIST_H