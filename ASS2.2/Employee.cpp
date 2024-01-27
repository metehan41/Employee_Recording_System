//
// Created by Metehan on 20.11.2021.
//
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(int ID) {

    setId(ID);
    string name;
    string surname;
    string title;
    double salaryConst;
    time_t birthDate;
    time_t appointmentDate;
    int  lenDayOfServiceOther;

    cin>> name;
    cin>> surname;
    cin>> title;
    cin>> salaryConst;
    cin>> birthDate;
    cin>> appointmentDate;
    cin>>lenDayOfServiceOther;

    setName(name);
    setSurname(surname);
    setTitle(title);
    setSalaryConst(salaryConst);
    setBirthDate(birthDate);
    setAppointmentDate(appointmentDate);
    setLenDayOfServiceOther(lenDayOfServiceOther);

}

int Employee::getId() {
    return id;
}

void Employee::setId(int id) {
    Employee::id = id;
}

int Employee::getEmployeeType() {
    return employeeType;
}

void Employee::setEmployeeType(int employeeType) {
    Employee::employeeType = employeeType;
}

string Employee::getName()  {
    return name;
}

void Employee::setName(string name) {
    Employee::name = name;
}

string Employee::getSurname() {
    return surname;
}

void Employee::setSurname(string surname) {
    Employee::surname = surname;
}

string &Employee::getTitle() {
    return title;
}

void Employee::setTitle(string title) {
    Employee::title = title;
}

double Employee::getSalaryConst() {
    return salaryConst;
}

void Employee::setSalaryConst(double salaryConst) {
    Employee::salaryConst = salaryConst;
}

time_t Employee::getBirthDate() {
    return birthDate;
}

void Employee::setBirthDate(time_t birthDate) {
    Employee::birthDate = birthDate;
}

time_t Employee::getAppointmentDate() {
    return appointmentDate;
}

void Employee::setAppointmentDate(time_t appointmentDate) {
    Employee::appointmentDate = appointmentDate;
}

int Employee::getLenDayOfServiceOther() {
    return lenDayOfServiceOther;
}

void Employee::setLenDayOfServiceOther(int lenDayOfServiceOther) {
    Employee::lenDayOfServiceOther = lenDayOfServiceOther;
}
