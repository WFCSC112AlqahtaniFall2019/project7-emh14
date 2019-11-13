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
    dataFile.open("../MovieData.csv");
    cout << "Reading MovieData.csv..." << endl;

    //open stacked file
    stackOutFile.open("../stacked.txt"); //relative address

    //create new Stack
    Stack *newStack = new Stack;


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
    }


    //call printing ftn from LinkedList
    newStack->print(stackOutFile);
    cout << "Printing data to stacked.txt..." << endl << endl;

    //close all files
    dataFile.close();
    stackOutFile.close();

    //new File
    ofstream queueOutFile;

    //Link csv file
    dataFile.open("../MovieData.csv");
    cout << "Reading MovieData.csv..." << endl;

    //open stacked file
    queueOutFile.open("../queue.txt"); //relative address

    //create new Stack
    Queue *newQueue = new Queue;


    //read the first line with column titles separately
    string titleHeader2;
    getline(dataFile, titleHeader2, ',');

    string yearHeader2;
    getline(dataFile, yearHeader2, ',');

    string scoreHeader2;
    getline(dataFile, scoreHeader2, ',');

    string runtimeHeader2;
    getline(dataFile, runtimeHeader2, ',');

    string genreHeader2;
    getline(dataFile, genreHeader2, ',');

    string ratingHeader2;
    getline(dataFile, ratingHeader2);

    //Print Headers
    queueOutFile << titleHeader2 << "\t" << yearHeader2 << "\t" << scoreHeader2 << "\t" << runtimeHeader2 << "\t"
                 << genreHeader2 << "\t"
                 << ratingHeader2 << endl << endl;

    //read the file by each variable line
    while (!dataFile.eof()) {

        string title2;
        getline(dataFile, title2, ',');

        string yearString2;
        getline(dataFile, yearString2, ',');

        string scoreString2;
        getline(dataFile, scoreString2, ',');

        string runtimeString2;
        getline(dataFile, runtimeString2, ',');

        string genre2;
        getline(dataFile, genre2, ',');

        string rating2;
        getline(dataFile, rating2);


        /*Convert from strings to correct data type*/
        int year2 = stoi(yearString2);
        double score2 = stod(scoreString2);
        int runtime2 = stoi(runtimeString2);

        //Creates a new object for each movie read in and correct variable types
        Data newData = Data(title2, year2, score2, runtime2, genre2, rating2);

        //Push to the head of the stack
        newQueue->enqueue_tail(newData);
    }

    //call printing ftn from LinkedList
    newStack->print(stackOutFile);
    cout << "Printing data to queue.txt..." << endl;

    //close all files
    dataFile.close();
    queueOutFile.close();

    return 0;
}