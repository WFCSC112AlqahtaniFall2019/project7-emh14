/* Ethan Harrison
 * CSC 112
 * Project 7
 * Linked Lists, Stacks, Queue, Sorted Linked Lists, and Inheritance
 * */

#include "Queue.h"
using namespace std;

//Default constructor
Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

//enqueue_tail member function
void Queue::enqueue_tail(Data input){
    Node *newTail = new Node(input, nullptr); //creates new Node

    //if already end of list
    if (tail == nullptr) {
        head = newTail;
        tail = newTail;

    } else {
        tail->next = newTail; //point to the new end of list
        tail = newTail; //reassigns the last element

    }

}

//dequeue_head member function
bool Queue::dequeue_head(){
    if (head != nullptr) {
        Node* tempNode = head; //create temporary Node
        head = head->next; //iterate over one position
        delete(tempNode); //delete the temporary
        return true;
    }
    else{
        return false;
    }
}


