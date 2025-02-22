#include <iostream>
#include "LinkedList.h"
using namespace std;

linkedList::linkedList(){
    head = nullptr;
}

void linkedList::insertAt(int value, int index){
    node* nodeToAdd = new node(value);
    if(index > this->getLength()-1 || index < 0){
        cout << "Invalid Index: " << index <<endl;
        return; //make sure that index is valid, otherwise return function and output error message
    }
    if(index == 0){ //dont waste time iterating through if it's inserting at the head
        node* temp = head;
        head = nodeToAdd;
        nodeToAdd->setNext(*temp);
    } else {
        node* currNode = nullptr;
        node* prevNode = head;
        for(int i = 1; i < this->getLength()-1; i++){
            currNode = prevNode->getNext();
            if(i == index){
                insertAfter(*nodeToAdd, *prevNode); 
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
    while(currNode != nullptr){
        length++;
        currNode = currNode->getNext();
    }
    return length;
}

void linkedList::append(int value){
    node* newNode = new node(value);
    if(head == nullptr){
        head = newNode;
        return;
    }

    node* currNode = head;
    while (currNode->getNext() != nullptr)
    {      
        currNode = currNode->getNext();
    }
    currNode->setNext(*newNode);
}

int linkedList::getIndex(int value){
    node* currNode = head;
    int index = 0;
    while (currNode != nullptr)
    {
        if(currNode->getValue() == value){
            return index;
        }
        index += 1;
        currNode = currNode->getNext();

    }

    return -1;
    

}

void linkedList::print(){
    if(getLength() == 0){
        cout<<"empty"<<endl;
        return;
    }
    node* currNode = head;
    while(currNode != nullptr){
        cout<< currNode->getValue() << " ";
        currNode = currNode->getNext();
    }
    cout<<endl;
}