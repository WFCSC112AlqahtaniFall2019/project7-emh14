/* Ethan Harrison
 * CSC 112
 * Project 7
 * Linked Lists, Stacks, Queue, Sorted Linked Lists, and Inheritance
 * */

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H
#include <iostream>
#include <string>
using namespace std;

class Data {


private:
    string title;
    int year;
    double score;
    int runtime;
    string genre;
    string rating;

public:
    //Overloads the output stream operator
    friend ostream& operator<<(ostream& os, const Data& data);

    //Overloads the comparison operators
    bool operator>(const Data &scoring);

    //Default Constructor
    Data();

    //Alternate Constructor
    Data(string t, int y, double s, int runt, string g, string rate);

};


#endif //PROJECT7_DATA_H
