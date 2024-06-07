//
// Created by Prateek Panda on 4/5/24.
//

#ifndef LAB3_MANAGECONTACTS_MENU_H
#define LAB3_MANAGECONTACTS_MENU_H


#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
   base class menu
*/
class Menu {
public:
// Default constructor
/*******************************************************
 * Function Name: Menu
 * Purpose: Constructs a menu object.
 * Parameter: None
 * Return: None
 *******************************************************/
    Menu();

// Constructor with name of the menu.
/*******************************************************
 * Function Name: Menu
 * Purpose: Constructs a menu object with a given name.
 * Parameter: name - The name of the menu.
 * Return: None
 *******************************************************/
    Menu(string name);

// Name of the menu
/*******************************************************
 * Function Name: setName
 * Purpose: Sets the name of the menu.
 * Parameter: name - The name of the menu.
 * Return: None
 *******************************************************/
    void setName(string name) {
        this->name = name;
    }

/**
   Adds an option to the end of this menu.
   @param option the option to add
*/
/*******************************************************
 * Function Name: addOption
 * Purpose: Adds an option to the menu.
 * Parameter: option - The option to add.
 * Return: None
 *******************************************************/
    void addOption(string option);

/**
   Displays the menu, with options numbered starting with 1,
   and prompts the user for input. Repeats until a valid input
   is supplied.
   @return the number that the user supplied
*/
/*******************************************************
 * Function Name: doMenuIndex
 * Purpose: Displays the menu and prompts the user for input.
 * Parameter: None
 * Return: The number that the user supplied.
 *******************************************************/
    int doMenuIndex() const;

/*******************************************************
 * Function Name: doMenuOption
 * Purpose: Displays the menu and prompts the user for input.
 * Parameter: None
 * Return: The character that the user supplied.
 *******************************************************/
    char doMenuOption() const;

/*******************************************************
 * Function Name: hasOption
 * Purpose: Checks if the menu has options.
 * Parameter: None
 * Return: True if the menu has options, false otherwise.
 *******************************************************/
    bool hasOption() const {
        return options.size() > 0;
    };

private:
/*******************************************************
 * Function Name: display
 * Purpose: Displays the menu options.
 * Parameter: None
 * Return: None
 *******************************************************/
    void display() const;

/*******************************************************
 * Function Name: displayIndex
 * Purpose: Displays the menu options with their indexes.
 * Parameter: None
 * Return: None
 *******************************************************/
    void displayIndex() const;


    string name;
    vector<string> options;
};


#endif //LAB3_MANAGECONTACTS_MENU_H
