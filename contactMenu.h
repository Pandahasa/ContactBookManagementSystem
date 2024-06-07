/******************************************************
 * Program Name: ContactMenu
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This header file defines a ContactMenu class that inherits from the Menu class.
 * The ContactMenu class includes methods for listing, viewing, adding, editing, and deleting contacts.
 * It also supports sorting the list by a specified field and exiting the menu.
 *******************************************************/

#ifndef LAB3_MANAGECONTACTS_CONTACTMENU_H
#define LAB3_MANAGECONTACTS_CONTACTMENU_H
#include "menu.h"
#include "contactList.h"

class ContactMenu : public Menu {
public:
    /******************************************************
     * Function Name: ContactMenu (default constructor)
     * Purpose: Constructs a ContactMenu object with default values.
     * Parameter: None
     * Return: None
     *******************************************************/
    ContactMenu();

    /******************************************************
     * Function Name: activate
     * Purpose: Activates the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void activate();

    /******************************************************
     * Function Name: initSelection
     * Purpose: Initializes the selection for the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void initSelection();

private:
    ContactList contactList;

    /******************************************************
     * Function Name: doList
     * Purpose: Lists the contacts in the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doList();

    /******************************************************
     * Function Name: doSortBy
     * Purpose: Sorts the contacts in the ContactMenu by a specific field.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doSortBy();

    /******************************************************
     * Function Name: doView
     * Purpose: Views the contacts in the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doView();

    /******************************************************
     * Function Name: doAdd
     * Purpose: Adds a contact to the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doAdd();

    /******************************************************
     * Function Name: doEdit
     * Purpose: Edits a contact in the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doEdit();

    /******************************************************
     * Function Name: doDelete
     * Purpose: Deletes a contact from the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doDelete();

    /******************************************************
     * Function Name: doExit
     * Purpose: Exits the ContactMenu.
     * Parameter: None
     * Return: None
     *******************************************************/
    void doExit();

};


#endif //LAB3_MANAGECONTACTS_CONTACTMENU_H

