#include "LinkedList.h"
using namespace std;

void linkedList::setSize(int s){ 
  size = s;
}

void linkedList::insertNode(Node &node){ 
  Node *q = new Node;
  q->value = node.value; q->count = node.count; q->next = node.next;
  if(head == NULL)
    head = q;
  else{
    Node *p = head;
    while(p->next != NULL){
      p = p->next;
    }
    p->next = q;
    q->next= NULL;
  }
}

void linkedList::removeNode(){ 
  if(head == NULL)
    cout << "List is empty." <<endl;
  else{
    Node *p= head, *q; 
    while(p->next != NULL){
      q = p;
      p = p->next;
    }
    q->next = NULL;
    delete p;
  }
}

void linkedList::printList(){ 
  Node *p = head;
   while(p != NULL){
     cout << p->value << " ";
     p = p->next;
   }
  cout <<endl;
}

int linkedList::sumOfNodes(){
  int sum = 0;
  Node *p = head;
   while(p != NULL){
     sum += p->value;
     p = p->next;
   }
  return sum;
}

Node linkedList::vecToLL(vector<int>V){
  vector<int>::iterator Iter1, Iter2, Iter3;
  vector<int>V2;  
  for(Iter1 = V.begin(); Iter1 != V.end(); Iter1++){
    bool flag = false;
    for(Iter2 = V2.begin(); Iter2 != V2.end(); Iter2++){
      if(*Iter1 == *Iter2)
        flag = true;
    }
    if(flag == false){
      Node newNode;
      newNode.value = (*Iter1);
      V2.push_back(newNode.value);
      newNode.next = NULL;
      int count = 0;
      for(Iter3 = V.begin(); Iter3 != V.end(); Iter3++){
        if(*Iter3 == *Iter1)
        count++;
      }
      newNode.count = count;
      insertNode(newNode);
    }
  }

  return *head;
}




  
