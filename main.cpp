//libraries used 
#include <iostream>
#include <fstream>
#include <string>
#include "cell.h"
#include "CList.h"
#include "Student.h"

using namespace std;

void Banner(ostream& out) {
    out << "-------Welcome to Program 4 by Steve Nwachukwu!---------\n" << endl;
    out << "My Major is Computer Science        Graduation Year: 2025\n" << endl;
    out << "Favorite Quote: Your time is limited, so don't waste it living someone else's life. - Steve Jobs \n" << endl;
    out << "About Me: I'm really tech savy and I like going out for walks. Also, I like to play video games and watch cartoons.\n" << endl;
} //function prototype of my banner function to be called in my beginning

void Bye(ostream& out) {
    out << "\nThanks for viewing my program, bye and have a nice day!" << endl;
} //function prototype of my bye function to be called in the program

int main() {
    Banner(cout); //banner gets called in
    
    ifstream InputFile("late.txt");//Input file of my program
    if (!InputFile.is_open()) {
        cout << "Sorry but you're file cannot be opened!" << endl;
        exit(-1);
    } //the program first checks to see if the text file could open
    string fName;
    string lName;
    int count = 0;
    Cell* current;
    CList* list = new CList; //declaring the circular linked list
    for (;;) {
        InputFile >> fName >> lName; //continuosly reading in the names of the text file
        count++; //counting the names from the file
        list->insert(Student(fName, lName)); //the names getting inserted into the circular linked list
        if (count == 1) {
            cout << "Loser: " << fName <<endl;
            Bye(cout);
            exit(-1);
        } //if there's one name in the text file then announce the loser
        if (InputFile.eof()) {
            cout << "Congratulations, there are no names in the file!" << endl;
            break;
        } //the message if they're isnt any names in the file
        }
    current = list->getHead(); //the current pointer automically points to the head
    cout << current->getdata().GetSeen() << endl; //marking the first student as seen
    int strLength = current->getdata().getLname().length(); //getting the length of the current last name
    while (!current->getdata().GetSeen()) {
        cout << "The previous loser was " << current->getdata().getFname() << current->getdata().getLname() << endl;
        cout << current->getdata().GetSeen() << endl;
        current->getdata().SetSeen();
        current = current->getnext();
        if (current == list->getHead()) {
            break;
        }
    } //if the student wasn't flagged as seen then announce the previous loser
}
