#include "person.h"

// Constructor
person::person() {
    firstName = "";
    lastName = "";
}

person::person(string first, string last) {
    firstName = first;
    lastName = last;
}

// Setters
void person::setFirstName(string first)
{
    firstName = first;
}
void person::setLastName(string last)
{
    lastName = last;
}

// Getters
string person::getFirstName() const
{
    return firstName;
}
string person::getLastName() const
{
    return lastName;
}

// Print the Output
string person::printPerson() const
{
    cout << firstName << ", " << lastName << endl;
    return getFirstName() + ", " + getLastName();
}


