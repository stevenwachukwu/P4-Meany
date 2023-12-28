
#include "CList.h"

void CList::start() {
    head = nullptr; //initializing the head with a null pointer
} //the start function of the program


void CList::insert(Student student) {
    Cell* newcell = new Cell(student); //creating a new cell
    if (head == nullptr) {
        head = newcell;
        tail = newcell;
    }
    else {
        newcell->next = head; //saving the head in a new item
        head = newcell; //making the head point to the newest entry
    }
    tail->next = head;
} //the insert function for the circular linked list for main.cpp
