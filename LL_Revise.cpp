#include <iostream>
using namespace std;

class Node{
public:
int item;
Node *next;

Node(int item){
  this->item = item;
  this->next = NULL;
}
};


class LinkedList{
Node *Head;
public:
LinkedList(){
  Head = NULL;
}

void InsertatBeg(int item){
  Node *newnode = new Node(item);
  if(Head == NULL)
    Head = newnode;
  else{
    newnode->next = Head;
    Head = newnode;
  }
}

void InsertatEnd(int item){
  Node *newnode = new Node(item);
  if(Head == NULL)
  {
    Head = newnode;
  }
  else{
    Node *temp = Head;
    while(temp->next != NULL)
      {
        temp = temp->next;
      }
    temp->next = newnode;
  }
}

void InsertatPos(int item, int key)
{
  Node *newnode = new Node(item);
  if(Head == NULL)
  {
    Head = newnode;
  }
  else{
    Node *temp = Head;
    while(temp->next != NULL && temp->item!=key)
      {
        temp = temp->next;
      }
    if(temp->next == NULL)
      cout << "\n Oops Key not found";
    else{
    newnode->next = temp->next;  
    temp->item = item;
    }
  }
}

void DeleteatBeg(){
  Node *temp = Head;
  if(Head == NULL)
    cout<<"/n Linkedlist is empty";
  else if(temp->next == NULL)
    Head = NULL;
  else
    Head = Head->next;
}

void DeleteatEnd(){
  Node *temp = Head;
  if(Head == NULL)
    cout<<"/n Linkedlist is empty";
  else if(temp->next ==  NULL)
  Head = NULL;
  else{
    Node *temp2;
  while(temp->next !=NULL)
    {
      temp2= temp;
      temp = temp->next;
    }
    temp2->next = NULL;
  }
}

void deleteatPos(int key)
{
  Node *temp = Head;
  if(Head == NULL)
    cout<<"/n Linkedlist is empty";
  else if(temp->next ==  NULL)
  Head = NULL;
  else{
    Node *temp2;
  while(temp->next !=NULL && temp->item != key)
    {
      temp2= temp;
      temp = temp->next;
    }
    temp2->next = NULL;
  }
  
}


void display()
{
  Node *temp = Head;
  while(temp->next != NULL)
    {
      cout<<temp->item<<" ";
      temp = temp->next;
    }
}


};
int main() {
  LinkedList A;
  A.InsertatBeg(12);
  A.InsertatBeg(33);
  A.InsertatBeg(82);
  A.display();
  cout<<endl;
  A.InsertatEnd(45);
  A.display();
  cout<<endl;
  A.InsertatPos(30,33);
  A.display();


  return 0;
}