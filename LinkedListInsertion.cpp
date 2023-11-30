#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(){
  data = 0;
  next = NULL;
}

Node(int item){
  this->data = item;
  this->next = NULL;
}
};

class LinkedList{

Node* Head;
public:
LinkedList(){
  Head = NULL;
}

void InsertNode(int item)
{
  Node* newnode = new Node(item);
  if(Head == NULL)
  {
    Head = newnode;
  }
  else{
    Node* temp = Head;
    while(temp-> next != NULL)
      {
        temp = temp-> next;
      }
    temp -> next = newnode;
  }
}

void Display(){
  Node* temp = Head;
  if(Head == NULL)
  {
    cout<<"\nOops Linked List is Empty";
  }

  while(temp != NULL)
    {
      cout<< temp->data<<" ";
      temp = temp->next;
    }
}


};

int main() {
  LinkedList Object;
  Object.InsertNode(5);
  Object.InsertNode(58);

  cout<<"\n Items are";
  Object.Display();


  
}


