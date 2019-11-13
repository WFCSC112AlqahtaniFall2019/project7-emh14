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
    ifstream dataFile;
    ofstream stackOutFile;

    //Link csv file
    dataFile.open("MovieData.csv");

    //create new Stack
    Stack *newStack = new Stack;

    //read the file by each variable line
    while (!dataFile.eof()) {

        string title;
        getline(dataFile, title, ',');

        string year;
        getline(dataFile, year, ',');

        string score;
        getline(dataFile, score, ',');

        string runtime;
        getline(dataFile, runtime, ',');

        string genre;
        getline(dataFile, genre, ',');

        string rating;
        getline(dataFile, rating, ',');

        cout << title << endl;

        //Creates a new object for each movie read in and correct variable types
        Data newData = Data(title, stoi(year), stod(score), stoi(runtime), genre, rating);

        //Push to the head of the stack
        newStack->push_head(newData);
    }


    //open stacked file
    stackOutFile.open("../stacked.txt"); //relative address

    //printing loop
    while (true) {
        newStack->print(stackOutFile);
        if (!newStack->pop_head()) {
            break;
        }
    }

    //close all files
    dataFile.close();
    stackOutFile.close();

    return 0;
}