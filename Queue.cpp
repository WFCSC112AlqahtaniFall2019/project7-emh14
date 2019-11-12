//
// Created by Ethan Harrison on 11/7/19.
//

#include "Queue.h"
using namespace std;

//Default constructor
Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

//enqueue_tail member function
void Queue::enqueue_tail(Node* input){
    Node* newTail = new Node(input->data); //creates new Node
    tail->next = newTail; //point to the new end of list
    tail = newTail; //reassigns the last element

}

//dequeue_head member function
bool Queue::dequeue_head(){
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
