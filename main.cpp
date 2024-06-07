/******************************************************
 * Program Name: Main
 * Author: Prateek Panda
 * Date: 4/6/2024
 * Description: This program initializes and activates the ContactMenu. It is the entry point of the application.
 *******************************************************/
#include <iostream>
#include "contactMenu.h"


int main() {
    ContactMenu *main_menu =  new ContactMenu();
    main_menu->activate();
    delete main_menu;
    return 0;
}
