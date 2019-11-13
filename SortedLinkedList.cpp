/* Ethan Harrison
 * CSC 112
 * Project 7
 * Linked Lists, Stacks, Queue, Sorted Linked Lists, and Inheritance
 * */

#include "SortedLinkedList.h"
#include "LinkedList.h"
using namespace std;

void SortedLinkedList::insertSorted(Data input) {
    Node* newItem = new Node(input); //creates new Node


    /* Some Code from Previous Lab */

    if (head == nullptr) {
        head = newItem;
    } else {

        Node *current = head; // create node for current position of the list
        Node *previous = nullptr; // create node for previous position of the list

        //if the current element needs to go at the head
        if (current->data > newItem->data) {
            newItem->next = head; //changing the head pointer
            head = newItem; //reassigns the first element
            return;
        }

        // Iterate to the next item.
        previous = current;
        current = current->next; //moving begin down the list

        //loop that finds the location of the node
        while (current && newItem->data > current->data) {
            previous = current;
            current = current->next; //moving begin down the list
        }

        //insert the new item
        newItem->next = current;
        previous->next = newItem;
    }

}


