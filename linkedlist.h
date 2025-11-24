#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

// Node struct
struct node {
    double num;
    node* next;
    node* prev;
};


class LinkedList {
private:
    node* root;
    node* last;
    node* cur;

public:
    // Constructor
    LinkedList();
    // Destructor
    ~LinkedList();

    // Add to the list
    void addItem(double value);       
    // Print all nodes in the list
    void printList() const;           
    // Read one item at a time
    bool readNext(double &value);     
    void resetCursor();               
};

#endif
