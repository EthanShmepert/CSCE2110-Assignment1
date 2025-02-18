#ifndef Node
#define Node

class node{
    public:
        node();
        node(int newVal);
        node* getNext();
        void setNext(node &newNext);

    private:
        int value;
        node* nextNode;
};


#endif