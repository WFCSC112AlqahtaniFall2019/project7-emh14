//
// Created by Ethan Harrison on 11/11/19.
//

#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include "LinkedList.h"


class SortedLinkedList: public LinkedList {
public:

    //Inserts it into the Sorted Linked List at the appropriate place in the list
    void insertSorted(Data input);
};


#endif //PROJECT7_SORTEDLINKEDLIST_H
