#include <iostream>
#include "employee.h"

using namespace std;

int main()
{
    employee *e = new employee("Kevin", "Slonka", "Associate Professor");
    
    e->addSales(1000.0);
    e->addSales(3000.0);
    e->addSales(2500.0);
    e->addSales(10000.0);
    e->addSales(20050.5);
    
    e->print();
    
    delete e;
    
    return 0;
}