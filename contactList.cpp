/******************************************************
 * Program Name: contactList
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This program manages a list of contacts. It allows for adding, editing, deleting, and viewing contacts.
 * It also supports sorting the list by a specified field.
 *******************************************************/

#include "contactList.h"
#include <iomanip>

ContactList::ContactList() {
    initData();
}

void ContactList::initData() {
    //Reads the data from the file and adds it to the list
    inFile.open("/Users/prateekp/CLionProjects/Mr.Pham CS124/Lab3-ManageContacts/contacts_data.csv");
    if (!inFile) {// Returns error if file error occurs

        cout << "Error opening file" << std::endl;
        return;
    }
    string line;
    //runs getline to skip header row
    getline(inFile, line);

    while (getline(inFile, line, '\n')) {
        stringstream ss(line);
        string id, firstName, middleName, lastName, year, month, day, role, company_name, address, city, county, state, zip,
        phone1, phone2, pronouns, email;
        email = "";
        getline(ss, id, ',');
        getline(ss, firstName, ',');
        getline(ss, middleName, ',');
        getline(ss, lastName, ',');
        getline(ss, month, '/');
        getline(ss, day, '/');
        getline(ss, year, ',');
        DateTime date = DateTime(stoi(year), stoi(month), stoi(day));
        getline(ss, role, ',');
        getline(ss, company_name, ',');
        getline(ss, address, ',');
        getline(ss, city, ',');
        getline(ss, county, ',');
        getline(ss, state, ',');
        getline(ss, zip, ',');
        getline(ss, phone1, ',');
        getline(ss, phone2, ',');
        getline(ss, pronouns, ',');
        getline(ss, email, ',');
        if (email == "" || email == "\r" || email== "\n") {
            email = "N/A";
        }
        Contact contact = Contact(id, role, company_name, firstName, middleName, lastName, date,
                                  address, city, county, state, zip, phone1, phone2, pronouns, email);
        push_back(contact);
    }

    inFile.close();
}

void ContactList::doList(bool ascending) {
    //displays the entire list formatted for each field for each contact
    Iterator<Contact> i = begin();
    cout << left << setw(10) << "ID" << setw(15) << "First Name" << setw(15) << "Middle Name" << setw(15) << "Last Name"
         << setw(15) << "Birth Date" << setw(15) << "Role" << setw(30) << "Company" << setw(25) << "Address"
         << setw(15) << "City" << setw(25) << "County" << setw(15) << "State" << setw(15) << "Zip"
         << setw(15) << "Phone 1" << setw(15) << "Phone 2" << setw(15) << "Pronouns" << setw(30) << "Email" << endl;
    while (!i.equals(end())) {
        //Displays the contact on one line using iomanip
        cout << left << setw(10) << i.get().getId() << setw(15) << i.get().getFirstName() << setw(15) << i.get().getMiddleName()
             << setw(15) << i.get().getLastName() << setw(15) << i.get().getBirthDate().toString() << setw(15) << i.get().getRole()
             << setw(30) << i.get().getCompany() << setw(25) << i.get().getAddress() << setw(15) << i.get().getCity()
             << setw(25) << i.get().getCounty() << setw(15) << i.get().getState() << setw(15) << i.get().getZip()
             << setw(15) << i.get().getPhone1() << setw(15) << i.get().getPhone2() << setw(15) << i.get().getPronouns();

        //If the email is N/A, it will not be displayed
        if (i.get().getEmail() != "N/A") {
            stringstream ss = stringstream(i.get().getEmail());
            string email;
            //The email cuts off the \r in the csv as it causes errors
            getline(ss, email, '\r');
            cout << setw(30) << email << endl;
        }
        else {
            cout << "" << endl;
        }
        i.next();
    }
}

void ContactList::doSortBy(string field) {
    selectionSort(field);
}

void ContactList::doView() {
    //The n variable is used to give the user a location for each contact if they decide to view it later
    int n = 1;
    string response;
    cout << endl << "The number above a contact signifies its location" << endl << endl;
    Iterator<Contact> i = begin();
    cout << n << ". " << i.get() << endl;
    do {
        cout << "Move next, move back, move first, move last, or exit? (next/back/first/last/exit)" << endl;
        cin >> response;
        if (response == "next") {
            cout << "Moving to next contact" << endl;
            i = moveNext(i, n);
            cout << n << ". " << i.get() << endl;
        } else if (response == "back") {
            cout << "Moving to previous contact" << endl;
            i = movePrevious(i, n);
            cout << n << ". " << i.get() << endl;
        } else if (response == "first") {
            cout << "Moving to first contact" << endl;
            i = moveFirst();
            n = 1;
            cout << n << ". " << i.get() << endl;
        } else if (response == "last") {
            cout << "Moving to last contact" << endl;
            Iterator<Contact> it = i;
            while (!it.equals(end())) {
                it.next();
                n++;
            }
            n--;
            i = moveLast();
            cout << n << ". " << i.get() << endl;
        } else if (response != "exit"){
            cout << "Invalid response, defaulting to next" << endl;
            i = moveNext(i, n);
            cout << ++n << ". " << i.get() << endl;
        }
    } while (response != "exit");
}

void ContactList::doAdd() {
    Contact contact;
    cin >> contact;
    push_back(contact);
    doSortBy("firstName");
    cout << "Contact added and contact list sorted by first name, re-sort if required" << endl;
}

void ContactList::doEdit(int location, bool ascending) {
    Contact &contact = getContactRef(location, ascending);

    cout << "What would you like to edit? (firstName, middleName, lastName, id, role, company, birthDate, "
            "\naddress, city, county, state, zip, phone1, phone2, pronouns, email)" << endl;
    string field;
    cin >> field;
    cout << "Enter the new value for " << field << endl;
    string temp;
    cin >> temp;
    if (field == "firstName") {
        contact.setFirstName(temp);
    } else if (field == "middleName") {
        contact.setMiddleName(temp);
    } else if (field == "lastName") {
        contact.setLastName(temp);
    } else if (field == "id") {
        contact.setId(temp);
    } else if (field == "role") {
        contact.setRole(temp);
    } else if (field == "company") {
        contact.setCompany(temp);
    } else if (field == "birthDate") {
        DateTime date;
        cin >> date;
        contact.setBirthDate(date);
    } else if (field == "address") {
        contact.setAddress(temp);
    } else if (field == "city") {
        contact.setCity(temp);
    } else if (field == "county") {
        contact.setCounty(temp);
    } else if (field == "state") {
        contact.setState(temp);
    } else if (field == "zip") {
        contact.setZip(temp);
    } else if (field == "phone1") {
        contact.setPhone1(temp);
    } else if (field == "phone2") {
        contact.setPhone2(temp);
    } else if (field == "pronouns") {
        contact.setPronouns(temp);
    } else if (field == "email") {
        contact.setEmail(temp);
    } else {
        cout << "Invalid field, going back to menu" << endl;
    }

}

void ContactList::doDelete(int location, bool ascending) {
    //We need to match location given to how the list was viewed
    if (ascending) {
        //Gets an iterator to the first element
        Iterator<Contact> i = begin();
        //Iterates through the list until the location provided is reached
        for (int n = 1; n < location; n++) {
            i.next();
        }
        erase(i);
    } else {
        Iterator<Contact> i = end();
        for (int n = 1; n < location; n++) {
            i.previous();
        }
        erase(i);
    }
}

Contact ContactList::getContact(int location, bool ascending) {
    //We need to match location given to how the list was viewed
    if (ascending) {
        //Gets an iterator to the first element
        Iterator<Contact> i = begin();
        //Iterates through the list until the location provided is reached
        for (int n = 1; n < location; n++) {
            i.next();
        }
        //Returns the contact at the location
        return i.get();
    } else {
        Iterator<Contact> i = end();
        for (int n = 1; n < location; n++) {
            i.previous();
        }
        return i.get();
    }
}

Contact &ContactList::getContactRef(int location, bool ascending) {
    //We need to match location given to how the list was viewed
    if (ascending) {
        //Gets an iterator to the first element
        Iterator<Contact> i = begin();
        //Iterates through the list until the location provided is reached
        for (int n = 1; n < location; n++) {
            i.next();
        }
        //Returns the contact at the location
        return i.getRef();
    } else {
        Iterator<Contact> i = end();
        for (int n = 1; n < location; n++) {
            i.previous();
        }
        return i.getRef();
    }

}

void ContactList::doExit() {
    string filename = "/Users/prateekp/CLionProjects/Mr.Pham CS124/Lab3-ManageContacts/contacts_data.csv";
    inFile.open(filename, ios::out | ios::trunc);
    if (!inFile) {
        cout << "Error opening file" << std::endl;
        return;
    }

    //Writes the row header to top of the csv
    inFile << "id,firstName,middleName,lastName,birthDate,role,company,address,city,"
              "county,state,zip,phone1,phone2,pronouns,email" << endl;
    Iterator<Contact> i = begin();
    stringstream line;
    while (!i.equals(end())) {
        Contact contact = i.get();
        line << contact.getId() << "," << contact.getFirstName() << "," << contact.getMiddleName() << ","
             << contact.getLastName() << "," << contact.getBirthDate().toString() << "," << contact.getRole() << ","
             << contact.getCompany() << "," << contact.getAddress() << "," << contact.getCity() << ","
             << contact.getCounty() << "," << contact.getState() << "," << contact.getZip() << ","
             << contact.getPhone1() << "," << contact.getPhone2() << "," << contact.getPronouns() << ","
             << contact.getEmail() << endl;
        inFile << line.str();
        line.str("");
        i.next();
    }

    inFile.close();
}

//Iterator changing functions

Iterator<Contact> ContactList::moveFirst() {
    return begin();
}

Iterator<Contact> ContactList::moveLast() {
    Iterator<Contact> it = end();
    it.previous();
    return it;
}

Iterator<Contact> ContactList::moveNext(Iterator<Contact> it, int &n) {
    //Moves to next
    it.next();
    //If the iterator is now null, then it goes back to the previous and returns
    if (it.equals(end())) {
        cout << "Cannot move next, already at end" << endl;
        it.previous();
        return it;
    }
    //Increments the location since not at null
    n++;
    return it;
}

Iterator<Contact> ContactList::movePrevious(Iterator<Contact> it, int &n) {
    if (it.equals(begin())) {
        cout << "Cannot move previous, already at beginning" << endl;
        return it;
    }
    n--;
    it.previous();
    return it;
}