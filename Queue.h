//
// Created by Ethan Harrison on 11/7/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include "LinkedList.h"

class Queue: public LinkedList {

private:
    Node* tail; //Node at end of list

public:
    //Default constructor
    Queue();

    //Inserts Node into the Queue at the tail of the list
   void enqueue_tail(Data input);

   //removes a Data object pointed to by the head pointer
   bool dequeue_head();


};


#endif //PROJECT7_QUEUE_H
