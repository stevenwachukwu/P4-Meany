#include <iostream>
#include <string>
#include "Cell.h"
#include "Student.h"



class CList
{
private:
    Cell* head; //the head pointer
    Cell* tail; //the tail pointer
    Cell* scan = nullptr;
    Cell* prior = nullptr;
public:
    CList() = default; //the constructor
    void start(); //the initializer of the head
    void insert(Student student);
    Cell* getHead() { return head; }
};
