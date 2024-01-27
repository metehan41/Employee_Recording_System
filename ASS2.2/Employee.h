//
// Created by Metehan on 20.11.2021.
//

#ifndef ASS2_EMPLOYEE_H
#define ASS2_EMPLOYEE_H
#include "string"
#include "ctime"
#include "iostream"

using namespace std;

class Employee {
private:
    int id;
    int employeeType;
    string name;
    string surname;
    string title;
    double salaryConst;
    time_t birthDate;
    time_t appointmentDate;
    int lenDayOfServiceOther;
public:

    Employee();
    ~Employee();

    Employee(int ID);

    void updateTitleAndSalary(int  ID, string title, double salaryConst);

    void deleteEmployee(int ID);

    void listInformation(int ID);

    void listAllEmployee();

    void listWithAppointmentDate();

    void listAllEmployeeAfterThisDate(time_t appointmentDate);

    void listAllEmployeeAppointmentThisDate(time_t appointmentDate);

    void listAllEmployeeBornBeforeThisDate(time_t birthDate);

    void listAllEmployeeBornInThisMonth(time_t birthDate);

    void listInformationWithTitle(string title);

    int getId();

    void setId(int id);

    int getEmployeeType();

    void setEmployeeType(int employeeType);

    string getName();

    void setName(string name);

    string getSurname() ;

    void setSurname(string surname);

    string &getTitle();

    void setTitle(string title);

    double getSalaryConst();

    void setSalaryConst(double salaryConst);

    time_t getBirthDate();

    void setBirthDate(time_t birthDate);

    time_t getAppointmentDate();

    void setAppointmentDate(time_t appointmentDate);

    int getLenDayOfServiceOther();

    void setLenDayOfServiceOther(int lenDayOfServiceOther);
};

#endif //ASS2_EMPLOYEE_H
