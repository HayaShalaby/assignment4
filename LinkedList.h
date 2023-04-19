#include <iostream>
#include <vector>
using namespace std;

#ifndef LinkedList_h
#define LinkedList_h

struct Node{
    int value;
    int count;
    Node *next = NULL;
};

class linkedList{
  int size = 0; //size of linked list
  Node *head = NULL; //head pointer pointing to the start of the linked list 

  public:
    void setSize(int s); //sets the size of LL 
    void insertNode(Node &node); //inserts node at the end of the LL 
    void removeNode(); //removes the last node from the LL
    void printList(); //prints all nodes of the LL
    int sumOfNodes(); //calculates then outputs the sum of all the nodes in the LL 
    Node vecToLL(vector<int>V); 
};

#endif