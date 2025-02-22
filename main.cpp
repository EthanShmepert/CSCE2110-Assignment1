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
void search(linkedList LL){
    int num;
    cout<<"What number would you like to find? ";
    cin>>num;
    cout<<"searching..."<<endl;
    int indexOfNum = LL.getIndex(num);
    if(indexOfNum == -1){
        cout << num << " not found." << endl;
        return;
    }
    cout<<num<<" is at index "<<indexOfNum<<endl;
    cout<<"| List:  ";
    LL.print();
    cout<<"|         ";
    for(int i = 0; i < indexOfNum; i++){
        cout<<" ";
    }
    cout<<"^"<<endl;
    cout<<"| Index: ";
    for(int i = 0; i < LL.getLength(); i++){
        cout<<i<<" ";
    }
    cout<<endl;
    
}

void append(linkedList LL){
    int num;
    cout<<"Enter number to append: ";
    cin>>num;
    cout<<"appending..."<<endl;
    LL.append(num);
    cout<<"Appended "<<num<<" to end of list."<<endl;
    cout<<"Current list:"<<endl;
    LL.print();
}

void insert(linkedList LL){
    int num;
    int index;
    cout<<"Enter value to insert: ";
    cin>>num;
    cout<<"Enter index to insert " << num << " at: ";
    cin>>index;
    cout<<"Inserting..."<<endl;
    LL.insertAt(num, index);
    cout<<"Inserted "<<num<<" at index "<<index<<"."<<endl;
    cout<<"Current list:"<<endl;
    LL.print();
}

void action(int choice, linkedList LL){
    switch (choice) {
        case 1:
        LL.print();
        break;

        case 2:
        search(LL);
        break;

        case 3:
        append(LL);
        break;

        case 4:
        insert(LL);
        break;

        case 5:
        cout<<"Program exited."<<endl;
        return;
        break;

        default:
        cout<<"Invalid entry"<<endl;
    }
    cout<<endl;
    printMenu();
}
int main(){
    linkedList myList;
    int length;
    printTitle();
    cout<<"Linked List Creator made by Ethan Shepherd | 2025 | CSCE2110"<<endl<<endl;
    cout<<"Enter length of list: ";
    cin>>length;
    cout<<"-----------------------"<<endl;
    int temp;
    for(int i = 0; i < length; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>temp;
        myList.append(temp);
    }
    cout<<endl;
    printMenu();
    int choice = -1;
    while(choice != 5){ 
        cout<<"Select: ";
        cin>>choice;
        cout<<endl;
        action(choice, myList);      
    }

    
    
    return 0;
}