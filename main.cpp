#include <iostream>
#include <fstream>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "SortedLinkedList.h"

using namespace std;

int main() {

    //declare fstream type variables
    ifstream inFile;
    ofstream outFile;

    //Link csv file
    inFile.open("MovieData.csv");

    //create new Stack
    Stack *newStack = new Stack;

    //read the file by each variable line
    while (inFile.good()) {

        string title;
        getline(inFile, title, ',');

        string year;
        getline(inFile, year, ',');

        string score;
        getline(inFile, score, ',');

        string runtime;
        getline(inFile, runtime, ',');

        string genre;
        getline(inFile, genre, ',');

        string rating;
        getline(inFile, rating, ',');

        //Creates a new object for each movie read in
        Data newData = Data(title, stoi(year), stod(score), stoi(runtime), genre, rating);

        //Push to the head of the stack
        newStack->push_head(newData);
    }



    return 0;
}