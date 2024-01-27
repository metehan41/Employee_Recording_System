//
// Created by Metehan on 20.11.2021.
//

#include "Employee_Recording_System.h"
#include "Employee.h"

class EmployeeNode {
public:
    Employee data;
    EmployeeNode *next;
};


void addToEmpty(EmployeeNode **last, Employee data) {
    EmployeeNode *ptr1 = new EmployeeNode();
    ptr1->data = data;
    ptr1->next = *last;

    if (*last != NULL) {
        // Find the node before head and update next of it.
        EmployeeNode *temp = *last;
        while (temp->next != *last)
            temp = temp->next;
        temp->next = ptr1;
    } else {
        ptr1->next = ptr1; /*For the first node */
    }


    *last = ptr1;
}


/*EmployeeNode *addBegin(EmployeeNode *last, Employee data) {
    if (last == NULL)
        return addToEmpty(last, data);

    EmployeeNode *temp = new EmployeeNode;

    temp->data = data;
    temp->next = last->next;
    last->next = temp;

    return last;
}

EmployeeNode *addEnd(EmployeeNode *last, Employee data) {
    if (last == NULL)
        return addToEmpty(last, data);

    EmployeeNode *temp = new EmployeeNode;

    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    last = temp;

    return last;
}

EmployeeNode *addAfter(EmployeeNode *last, Employee data, int item) {
    if (last == NULL)
        return NULL;

    EmployeeNode *temp = new EmployeeNode;
    EmployeeNode *p = new EmployeeNode;
    p = last->next;
    do {
        if (p->data.getId() == item) {
            temp->data = data;
            temp->next = p->next;
            p->next = temp;

            if (p == last)
                last = temp;
            return last;
        }
        p = p->next;
    } while (p != last->next);

    cout << item << " not present in the list." << endl;
    return last;

}

void printList(EmployeeNode *last) {
    EmployeeNode *p = new EmployeeNode;

    // If list is empty, return.
    if (last == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    p = last->next;
    cout << p->data.getId() << " ";
    p = p->next;
    while (p != last->next) {
        cout << p->data.getId() << " ";
        p = p->next;
    }
}
*/

class EmployeeNode *employeeNode = NULL;

Employee_Recording_System::Employee_Recording_System() {

}

Employee_Recording_System::~Employee_Recording_System() {

}

void Employee_Recording_System::addEmployee(int employeeId) {
    addToEmpty(&employeeNode, Employee(employeeId));
}