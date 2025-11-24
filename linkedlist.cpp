#include "linkedlist.h"
#include <iostream>
#include <iomanip>  

using namespace std;

// Constructor
LinkedList::LinkedList() {
    root = nullptr;
    last = nullptr;
    cur = nullptr;
}

// Destructor
LinkedList::~LinkedList() {
    node* temp = root;
    while (temp != nullptr) {
        node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
}

// Add a new item to the end of the list
void LinkedList::addItem(double value) {
    node* newNode = new node;
    newNode->num = value;
    newNode->next = nullptr;
    newNode->prev = last;

    if (root == nullptr) {
        root = newNode;
        last = newNode;
    } else {
        last->next = newNode;
        last = newNode;
    }
}

// Print the entire list
void LinkedList::printList() const {
    node* temp = root;


    while (temp != nullptr) {
        cout << fixed << setprecision(2) << temp->num;
        if (temp->next != nullptr) {
            cout << ", ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Read one item at a time
bool LinkedList::readNext(double &value) {
    if (cur == nullptr)
        cur = root;
    else
        cur = cur->next;

    if (cur == nullptr)
        return false;

    value = cur->num;
    return true;
}

// Reset the cursor
void LinkedList::resetCursor() {
    cur = nullptr;
}
