//
// Created by Metehan on 20.11.2021.
//

#include <iostream>
#include "Menu.h"
#include "Employee_Recording_System.h"
#include "Employee.h"


Menu::Menu() {

}

Menu::~Menu() {

}

void Menu::command() {
    cout << "____ Employee Recording System ___\n";
    cout << "Please select for the following Menu Operation: \n";
    cout << "1) Appointment of a new employee \n";
    cout << "2) Appointment of a transferred employee \n";
    cout << "3) Updating the title and salary coefficient of an employees \n";
    cout << "4) Deletion of an employee \n";
    cout << "5) Listing the information of an employee \n";
    cout << "6) Listing employees ordered by employee number \n";
    cout << "7) Listing employees ordered by appointment date \n";
    cout << "8) Listing employees appointed after a certain data \n";
    cout << "9) Listing employees assigned in a given year \n";
    cout << "10) Listing employees born before a certain data \n";
    cout << "11) Listing employees born in • particular month \n";
    cout << "12) Listing the information of the last assigned employee with a given title\n";

    Employee_Recording_System menu;
    int commands;
    cin >> commands;

    switch (commands) {
        case 1:
            int ID;
            cin >> ID;

            menu.addEmployee(ID);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
    }
    return;
}
