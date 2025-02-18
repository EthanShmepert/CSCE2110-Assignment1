#include <iostream>
#include <LinkedList.h>
using namespace std;

linkedList::linkedList(){
    head = nullptr;
}

void linkedList::insertAt(node &nodeToAdd, int index){
    if(index > this->getLength()-1 || index < 0){
        cout << "Invalid Index: " << index <<endl;
        return; //make sure that index is valid, otherwise return function and output error message
    }
    if(index == 0){ //dont waste time iterating through if it's inserting at the head
        node* temp = head;
        head = &nodeToAdd;
        nodeToAdd.setNext(*temp);
    } else {
        node* currNode = nullptr;
        node* prevNode = head;
        for(int i = 1; i < this->getLength()-1; i++){
            currNode = prevNode->getNext();
            if(i == index){
                insertAfter(*currNode, *prevNode); 
            }
            prevNode = currNode;
        }
    }
}

void linkedList::insertAfter(node &nodeToAdd, node &prevNode){ //made a seperate function to keep it organized
    node* temp = prevNode.getNext();
    prevNode.setNext(nodeToAdd);
    nodeToAdd.setNext(*temp);
}

int linkedList::getLength(){
    node* currNode = head;
    int length = 0;
    while(currNode->getNext() != nullptr){
        length++;
    }
    return length;
}

void linkedList::print(){
    node* currNode = head;
    for(int i = 0; i < getLength()-1; i++){
        cout<< currNode->getValue() << " ";
    }
    cout<<endl;
}