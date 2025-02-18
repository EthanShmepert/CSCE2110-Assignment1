#ifndef LinkedList
#define LinkedList
#include "Node.h"

class linkedList{

    node* head;

    public:
        linkedList();
        void insertAt(node &nodeToAdd, int index);
        void insertAfter(node &nodeToAdd, node &prevNode);
        void append(node& nodeToAdd);
        
        int getIndex(int value);
        int getLength();

};

#endif