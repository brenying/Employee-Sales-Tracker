#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "person.h"
#include "linkedlist.h"
using namespace std;

class employee : public person {
private:
    string employeeTitle;
    LinkedList sales;

public:
    // Constructor
    employee();
    employee(string first, string last, string title);
    
    // Setters
    void setEmployeeTitle(string title);
    
    // Getters
    string getEmployeeTitle() const;
    
    // Function to Add Sales
    void addSales(double sale);
    
    void print() const;
    double getTotalSales();
};

#endif