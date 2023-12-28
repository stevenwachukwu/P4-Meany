#ifndef student_h
#define student_h
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string fname;
	string lname;
	bool seen;

public:
	Student(string firstname, string lastname) {
		fname = firstname;
		lname = lastname;
		seen = false;
	} /*the student constructor that copies the names into the student object 
	  and sets the seen to false*/
	string getFname() {
		return fname;
	} //getter for the first name 

	string getLname() {
		return lname;
	} //getter for the last name
	bool GetSeen() { return seen; }
	void SetSeen() { seen = true; }
};
#endif
