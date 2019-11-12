//
// Created by Ethan Harrison on 11/7/19.
//


#include "Stack.h"
using namespace std;

//Default Constructor
Stack::Stack() {
    head = nullptr;
}

//push_head member function
void Stack::push_head(Data input) {
      Node* newHead = new Node(input); //creates new Node
      head = newHead; //reassigns the first element
}

//pop_head member function
bool Stack::pop_head() {
    if (head){
        Node* tempNode = head; //create temporary Node
        head = head->next; //iterate over one position
        delete(tempNode); //delete the temporary
        return true;
    }
    else{
        return false;
    }
}