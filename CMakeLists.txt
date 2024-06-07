cmake_minimum_required(VERSION 3.26)
project(Lab3_ManageContacts)

set(CMAKE_CXX_STANDARD 17)


add_executable(Lab3_ManageContacts main.cpp
        linkedlist.h
        person.cpp
        person.h
        contactList.cpp
        contactList.h
        contactMenu.cpp
        contactMenu.h
        menu.cpp
        menu.h
        datetime.cpp
        datetime.h
        contact.cpp
        contact.h)
