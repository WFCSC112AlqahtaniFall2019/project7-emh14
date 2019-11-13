//
// Created by Ethan Harrison on 11/7/19.
//

#include "Data.h"
#include <string>
#include <iostream>

using namespace std;

//Overloads the output stream operator
ostream &operator<<(ostream &os, const Data &data) {
    os << data.title << " " << data.year << " " << data.score << " " << data.runtime << " " << data.genre << " "
       << data.rating << endl;
    cout << data.title << " " << data.year << " " << data.score << " " << data.runtime << " " << data.genre << " "
         << data.rating << endl;
    return os;
}

//Overloads the comparison operators
bool Data::operator>(Data scoring) {
    if (this->score < scoring.score) {
        return false;
    }
    else if (this->score > scoring.score) {
        return true;
    }
    else {
        return false;
    }
}

//Default Constructor
Data::Data(){
    title = " ";
    year = 0;
    score = 0.0;
    runtime = 0;
    genre = " ";
    rating = " ";
}

//Alternate Constructor
Data::Data(string t, int y, double s, int runt, string g, string rate){
    title = t;
    year = y;
    score = s;
    runtime = runt;
    genre = g;
    rating = rate;
}

