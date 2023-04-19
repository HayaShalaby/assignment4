#include "LinkedList.h"
using namespace std;

void insertAfter(vector<int>&V, int value1, int value2);
//takes 2 values and a vector (all integers), searches in the vector for every occurence of value1 to insert value2 after it

int main() {
  int value1, value2;
  vector<int>V; 
  vector<int>::iterator Iter; //iterator for traversing the vector

  V.push_back(1); //inserting data into vector 
  V.push_back(2);
  V.push_back(2);
  V.push_back(4);
  V.push_back(5);
  V.push_back(6);
  V.push_back(6);


  cout << "The current size of the vector is " << V.size() <<endl;
  cout << "The current vector is:" <<endl;
  for(Iter = V.begin(); Iter != V.end(); Iter++){ //outputs the whole vector
    cout << *Iter << " ";
  }
  cout <<endl;

  cout << "Please enter the first value:" <<endl;
  cin >> value1;
  cout << "Please enter the second value:" <<endl;
  cin >> value2;

  insertAfter(V, value1, value2);
  
  cout << "The current size of the vector is " << V.size() <<endl;
  cout << "The current vector is:" <<endl;
  for(Iter = V.begin(); Iter != V.end(); Iter++){
    cout << *Iter << " ";
  }
  cout <<endl;
  
  cout << "Now we're going to make a linked list out of the vector elements." <<endl;

  linkedList LL; 
  LL.setSize(V.size());
  Node arrNodes = LL.vecToLL(V);
  cout << "The linked list:" <<endl;
   LL.printList();


  
  return 0;
}

void insertAfter(vector<int>&V, int value1, int value2){
  vector<int>::iterator Iter;
  for(Iter = V.begin(); Iter != V.end(); Iter++){
    if(*Iter == value1){
      Iter = V.insert(Iter + 1, value2);
    }
  }
}