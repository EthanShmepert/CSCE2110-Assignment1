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

void action(int choice, linkedList LL){
    
}
int main(){
    linkedList myList;
    int length;
    printTitle();
    cout<<"Linked List Creator made by Ethan Shepherd | 2025 | CSCE2110"<<endl<<endl;
    cout<<"Enter length of list: ";
    cin>>length;
    cout<<"---------------------<<endl";
    int temp;
    for(int i = 0; i < length; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>temp;
        myList.append(temp);
    }
    cout<<endl;

    int choice = -1;
    while(choice != 5){
        cout<<"Select: ";
        cin>>choice;
    }

    printMenu();
    
    return 0;
}