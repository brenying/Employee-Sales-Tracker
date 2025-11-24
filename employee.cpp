#include "employee.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Constructor
employee::employee()
{
    firstName = "";
    lastName = "";
    employeeTitle = "";
}
employee::employee(string first, string last, string title)
{
    firstName = first;
    lastName = last;
    employeeTitle = title;
}
    
// Setters
void employee::setEmployeeTitle(string title)
{
    employeeTitle = title;
}
    
// Getters
string employee::getEmployeeTitle() const
{
    return employeeTitle;
}
    
// Function to Add Sales
void employee::addSales(double sale)
{
    sales.addItem(sale);
}

// Method to Print Sales 
void employee::print() const
{
    //cout << lastName << ", " << firstName << endl;
    person::printPerson();
    
    // Print all sales
    cout << "Sales: ";
    sales.printList(); 

    // Print the total
    cout << "Total Sales: $" << fixed << setprecision(2) << const_cast<employee*>(this)->getTotalSales() << endl;
}

// Calculate total sales
double employee::getTotalSales()
{
    double total = 0.0;
    double value;

    sales.resetCursor();
    while (sales.readNext(value)) {
        total += value;
    }

    return total;
}




