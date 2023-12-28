
#ifndef cell_h
#define cell_h
#include "Student.h"

class Cell {
    friend class CList;
private:
    Student data; //data part of cell
    Cell* next = nullptr; //address part of the next cell
    //the constructor
    Cell(Student dataPassedIn) : data(dataPassedIn) {};
public:
    Student getdata() { return data; }
    Cell* getnext() { return next;}
};
#endif
