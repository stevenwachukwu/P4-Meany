Program 4: Prof. Meany and the Loser

1 Goals of this Assignment

In this assignment you will:
1. Modify and use a tightly-coupled pair of C++ classes.
2. To implement and use a circular linked list.
2 The Silly Story
Professor I.M.A.Meany is a stickler for being on time; he is intolerant of late work and
decided to train his students to get their programs done on time. He allows one day of
grace, then writes the names of all late students into a file named “late.txt”. Pretend that
you are his teaching assistant. He has asked you to take the names from the file, make
a circular linked list of names, and perform an eeny-meeny-miney-mo process to select
the loser. That person gets a zero on the assignment. Everyone else gets whatever
grade they earn, minus a late-penalty.
3 Classes Needed
1. Define a class named Student. Each student will be represented by a boolean flag,
seen, and two strings, fname and lname. The Student constructor must have
two string parameters, for the names. It should copy the names into the Student
object and set seen to false.
2. Define a class named CList (circular list) and a helper class named Cell. The last
Cell on a CList points back to the first Cell, so that a program can “walk” round and
round the list in a circle. See Section 4 for details and guidance.
4 Choosing the Loser
Setup.
1. Call banner(). Then open the late file properly and fill the list with Cells, each
containing one names from the file.
2. Instantiate your CList class, which should be initially empty.
3. Open the file and attempt to read the first line (two names, separated by a space).
4. If there are zero names in the file, end the program immediately with a
congratulatory comment.
5. Otherwise, read the file, one student at a time, install the student in a new Cell,
and attach the new Cell to the tail end of the list. Count the cells you create.
6. When eof is reached, close the file and make the last Cell on the list point back to
the first one, forming a circle. 2
Processing.
1. If there is exactly one name in the file, end the program immediately with a
comment announcing the loser.
2. Otherwise, set a pointer (current) to the first student on the list.
3. Use a string library function to get N, the length of the current last name.
4. Walk around the circular list for N steps and look at the seen flag for that student.
The first student who was previously is the loser. Announce his name and end the
process.
5. Otherwise, mark the current student as seen.
6. Repeat this process from step 3. Properly free all dynamic memory.
7. Call bye().
5 Circular Linked Lists
1. The Cell class can be defined one of two ways, below. For this program, please
use method (a), two separate classes and friendship. Adapt the code from
queue.hpp.
(a) Cell is a fully separate class that gives friendship to List. All members of Cell
are private.
(b) Cell is a class inside the private area of List. All members of Cell are public.
2. In your List class, define members for the head of the list and for walking around it. You
do not need a count field for this application.
3. Initially, the List should be empty, that is, the head of the list should be initialized
to nullptr.
4. The list described here is a straight-line list until eof is reached, and the ends are
joined.
5. All cells are inserted at the head of the list because that is easiest and most
efficient.
6. No special action is needed to maintain circularity when a Cell is removed.
7. Use a 2-pointer scan to walk around the list. This makes deletion very easy.
