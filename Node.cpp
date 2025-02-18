#include <iostream>
#include "Node.h"

node::node(){
    value = 0;
    nextNode = nullptr;
}

node::node(int newValue){
    value = newValue;
    nextNode = nullptr;
}

node* node::getNext(){
    return nextNode;
}

void node::setNext(node &newNext){
    nextNode = &newNext;
}

int node::getValue(){
    return value;
}

void node::setValue(int newValue){
    value = newValue;
}