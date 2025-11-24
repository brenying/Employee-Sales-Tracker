#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class person 
{
    protected:
        string firstName;
        string lastName;

    public:
        // Constructor
        person();
        person(string first, string last);
        // Setters
        void setFirstName(string first);
        void setLastName(string last);
        // Getters
        string getFirstName() const;
        string getLastName() const;
        // Print the Output
        string printPerson() const;
};
#endif