#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class linkedList{

    node* head;

    public:
        linkedList();
        void insertAt(int value, int index);
        void insertAfter(node &nodeToAdd, node &prevNode);
        void append(int value);

        void print();

        int getIndex(int value);
        int getLength();

};

#endif