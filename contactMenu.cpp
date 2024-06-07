/******************************************************
 * Program Name: ContactMenu
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This program manages a contact menu. It allows for listing, viewing, adding, editing, and deleting
 * contacts. It also supports sorting the list by a specified field and exiting the menu.
 *******************************************************/

#include "contactMenu.h"

ContactMenu::ContactMenu() : Menu("Contact Menu") {
    initSelection();
}

void ContactMenu::activate() {
    char input = 0;
    string response;
    do {
        input = this->doMenuOption();
        switch (input) {
            case '1':
                cout << "Would you like to view the list or sort it? (list/sort)" << endl;
                cin >> response;
                if (response == "list") {
                    doList();
                } else if (response == "sort") {
                    doSortBy();
                }
                break;
            case '2':
                doView();
                break;
            case '3':
                doAdd();
                break;
            case '4':
                doEdit();
                break;
            case '5':
                doDelete();
                break;
            case 'x':
                doExit();
                break;
        }
    } while (input != 'x');
}

void ContactMenu::initSelection() {
    addOption("1) List of Contacts");
    addOption("2) View a Contact");
    addOption("3) Add New Contact");
    addOption("4) Edit Contact");
    addOption("5) Delete Contact");
    addOption("x) Exit");
}

void ContactMenu::doList() {
    string response;
    cout << "Would you like to list in ascending or descending order? (asc/desc)" << endl;
    cin >> response;
    if (response == "asc") {
        contactList.doList(true);
    } else if (response == "desc") {
        contactList.doList(false);
    }
    else {
        cout << "Invalid response, defaulting to ascending" << endl;
        contactList.doList(true);
    }
}

void ContactMenu::doSortBy() {
    string response;
    cout << "What field would you like to sort by? (firstName, middleName, lastName, id, role, company, birthDate, "
            "\naddress, city, county, state, zip, phone1, phone2, pronouns, email)" << endl;
    cin >> response;
    contactList.doSortBy(response);
}

void ContactMenu::doView() {
    contactList.doView();
}

void ContactMenu::doAdd() {
    contactList.doAdd();
}

void ContactMenu::doEdit() {
    int location;
    bool ascending;
    cout << "Enter the location of the contact you would like to edit" << endl;
    cin >> location;
    cout << "Did you view in ascending or descending order? (asc/desc)" << endl;
    string response;
    cin >> response;
    if (response == "asc") {
        ascending = true;
    } else if (response == "desc") {
        ascending = false;
    }
    else {
        cout << "Invalid response, defaulting to ascending" << endl;
        ascending = true;
    }
    contactList.doEdit(location, ascending);
}

void ContactMenu::doDelete() {
    int location;
    bool ascending;
    cout << "Enter the location of the contact you would like to delete" << endl;
    cin >> location;
    cout << "Did you view in ascending or descending order? (asc/desc)" << endl;
    string response;
    cin >> response;
    if (response == "asc") {
        ascending = true;
    } else if (response == "desc") {
        ascending = false;
    }
    else {
        cout << "Invalid response, defaulting to ascending" << endl;
        ascending = true;
    }
    contactList.doDelete(location, ascending);
}

void ContactMenu::doExit() {
    cout << "Exiting Contact Menu" << endl;
    contactList.doExit();
}