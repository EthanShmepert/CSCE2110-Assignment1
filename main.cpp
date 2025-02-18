#include <iostream>
#include "LinkedList.h"
using namespace std;


void printMenu(){
    cout<<"- - - - Menu - - - -"<<endl;
    cout<<"1....Print List....."<<endl;
    cout<<"2....Search........."<<endl;
    cout<<"3....Append........."<<endl;
    cout<<"4....Insert At......"<<endl;
    cout<<"5....Exit..........."<<endl;
    
}

void printTitle(){
    cout<<" __         __     __   __     __  __     ______     _____        __         __     ______     ______  "<<endl;
    cout<<"/\\ \\       /\\ \\   /\\ \"-.\\ \\   /\\ \\/ /    /\\  ___\\   /\\  __-.     /\\ \\       /\\ \\   /\\  ___\\   /\\__  _\\ "<<endl;
    cout<<"\\ \\ \\____  \\ \\ \\  \\ \\ \\-.  \\  \\ \\  _\"-.  \\ \\  __\\   \\ \\ \\/\\ \\    \\ \\ \\____  \\ \\ \\  \\ \\___  \\  \\/_/\\ \\/ "<<endl;
    cout<<" \\ \\_____\\  \\ \\_\\  \\ \\_\\\\\"\\_\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\____-     \\ \\_____\\  \\ \\_\\  \\/\\_____\\    \\ \\_\\ "<<endl;
    cout<<"  \\/_____/   \\/_/   \\/_/ \\/_/   \\/_/\\/_/   \\/_____/   \\/____/      \\/_____/   \\/_/   \\/_____/     \\/_/ "<<endl;
    
}
int main(){
    linkedList myList;
    int length;
    printTitle();
    cout<<"Linked List Creator made by Ethan Shepherd | 2025 | CSCE2110"<<endl<<endl;
    cout<<"Enter length of list: ";
    cin>>length;

    int temp;
    for(int i = 0; i < length; i++){
        cin>>temp;
        myList.append(temp);
    }
    
    return 0;
}