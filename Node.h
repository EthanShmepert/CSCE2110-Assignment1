#ifndef Node
#define Node

class node{
    public:
        node();
        node(int newVal);

    private:
        int value;
        node* nextNode;
};


#endif