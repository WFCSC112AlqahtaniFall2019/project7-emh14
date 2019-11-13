/* Ethan Harrison
 * CSC 112
 * Project 7
 * Linked Lists, Stacks, Queue, Sorted Linked Lists, and Inheritance
 * */

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <stack>
#include "LinkedList.h"

class Stack: public LinkedList{

public:
    //Default Constructor
    Stack();

    //Inserts node into the Stack at the head of the list
    void push_head(Data input);

    //Removes a Data object pointed to by the head pointer
    bool pop_head();

};


#endif //PROJECT7_STACK_H
