/* Ethan Harrison
 * CSC 112
 * Project 7
 * Linked Lists, Stacks, Queue, Sorted Linked Lists, and Inheritance
 * */

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
    ofstream queueOutFile;
    ofstream sortedOutFile;

    //Link csv file
    dataFile.open("../MovieData.csv");
    cout << "Reading MovieData.csv..." << endl;

    //open  files with relative address
    stackOutFile.open("../stacked.txt");
    queueOutFile.open("../queue.txt");
    sortedOutFile.open("../sorted.txt");

    //create new Stack
    Stack *newStack = new Stack;
    //create new Queue
    Queue *newQueue = new Queue;
    //create new LinkedList
    SortedLinkedList *newList = new SortedLinkedList;

    //read the first line with column titles separately
    string titleHeader;
    getline(dataFile, titleHeader, ',');
    //cout<<"title"<<titleHeader<<endl;

    string yearHeader;
    getline(dataFile, yearHeader, ',');
    //cout<<"year"<<yearHeader<<endl;

    string scoreHeader;
    getline(dataFile, scoreHeader, ',');
    //cout<<"score"<<scoreHeader<<endl;

    string runtimeHeader;
    getline(dataFile, runtimeHeader, ',');
    //cout<<"run"<<runtimeHeader<<endl;

    string genreHeader;
    getline(dataFile, genreHeader, ',');
    //cout<<"genre"<<genreHeader<<endl;

    string ratingHeader;
    getline(dataFile, ratingHeader);
    //cout<<"rate"<<ratingHeader<<endl;


    //Print Headers
    stackOutFile << titleHeader << "\t" << yearHeader << "\t" << scoreHeader << "\t" << runtimeHeader << "\t"
                 << genreHeader << "\t"
                 << ratingHeader << endl << endl;
    queueOutFile << titleHeader << "\t" << yearHeader << "\t" << scoreHeader << "\t" << runtimeHeader << "\t"
                 << genreHeader << "\t"
                 << ratingHeader << endl << endl;
    sortedOutFile << titleHeader << "\t" << yearHeader << "\t" << scoreHeader << "\t" << runtimeHeader << "\t"
                  << genreHeader << "\t"
                  << ratingHeader << endl << endl;

    //read the file by each variable line
    while (!dataFile.eof()) {

        string title;
        getline(dataFile, title, ',');

        string yearString;
        getline(dataFile, yearString, ',');

        string scoreString;
        getline(dataFile, scoreString, ',');

        string runtimeString;
        getline(dataFile, runtimeString, ',');

        string genre;
        getline(dataFile, genre, ',');

        string rating;
        getline(dataFile, rating);

        //cout << title << " " << year<< " " << score << " " << runtime << " " << genre << " " << rating<< endl;

        /*Convert from strings to correct data type*/
        //cout<<"here!"<<endl;
        int year = stoi(yearString);
        //cout<<year<<endl;
        double score = stod(scoreString);
        //cout<<score<<endl;
        int runtime = stoi(runtimeString);
        //cout<<runtime<<endl;

        //Creates a new object for each movie read in and correct variable types
        Data newData = Data(title, year, score, runtime, genre, rating);

        //Push to the head of the stack
        newStack->push_head(newData);
        //Enqueue to the tail of the queue
        newQueue->enqueue_tail(newData);
        //Insert into sorted Linked List
        newList->insertSorted(newData);
    }

    //call printing ftn from LinkedList
    newStack->print(stackOutFile);
    cout << "Printing data to stacked.txt..." << endl;

    newQueue->print(queueOutFile);
    cout << "Printing data to queue.txt..." << endl;

    newList->print(sortedOutFile);
    cout << "Printing data to sorted.txt sorted by score ..." << endl << endl;

    //Removes each Data object using the “pop_head” function until the list is empty
    while (newStack->pop_head());

    //Removes each Data object using the “dequeue_head” function until the list is empty
    while (newQueue->dequeue_head());



    //close all files
    dataFile.close();
    stackOutFile.close();
    queueOutFile.close();
    sortedOutFile.close();

    return 0;
}