/* Ethan Harrison
 * CSC 112
 * Project 7
 * Linked Lists, Stacks, Queue, Sorted Linked Lists, and Inheritance
 * */

#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include "LinkedList.h"


class SortedLinkedList: public LinkedList {
public:

    //Inserts it into the Sorted Linked List at the appropriate place in the list
    void insertSorted(Data input);
};


#endif //PROJECT7_SORTEDLINKEDLIST_H
