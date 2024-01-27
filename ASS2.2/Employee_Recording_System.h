//
// Created by Metehan on 20.11.2021.
//

#ifndef ASS2_EMPLOYEE_RECORDING_SYSTEM_H
#define ASS2_EMPLOYEE_RECORDING_SYSTEM_H

#include "string"
#include "Employee.h"

using namespace std;

class Employee_Recording_System{
public:
    Employee_Recording_System();
    ~Employee_Recording_System();

    void addEmployee(int employeeId);
    void deleteEmployee(int employeeId);


    void checkEmployee(int employeeId);
    void returnEmployee(int employeeId);

    void showAllEmployees();
    void showEmployee(int employeeId);
};

#endif //ASS2_EMPLOYEE_RECORDING_SYSTEM_H
