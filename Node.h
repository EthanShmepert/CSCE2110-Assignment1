#ifndef NODE_H
#define NODE_H

class node{
    public:
        node();
        node(int newVal);
        node* getNext();
        void setNext(node &newNext);

        int getValue();
        void setValue(int newValue);

    private:
        int value;
        node* nextNode;
};


#endif