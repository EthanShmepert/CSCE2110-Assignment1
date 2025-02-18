#include <iostream>
#include <Node.h>

node::node(){
    value = 0;
    nextNode = nullptr;
}

node::node(int newValue){
    value = newValue;
    nextNode = nullptr;
}