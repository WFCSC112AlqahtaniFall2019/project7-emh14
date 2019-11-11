//
// Created by Ethan Harrison on 11/7/19.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H
#include <iostream>
#include <string>
using namespace std;

class Data {

public:
    //Overloads the output stream operator
    friend ostream& operator<<(ostream& os, const Data& data);

    //Overloads the comparison operators
    bool operator > (Data score);

private:
    string title;
    int year;
    int score;
    int runtime;
    string genre;
    string rating;
};

#endif //PROJECT7_DATA_H
