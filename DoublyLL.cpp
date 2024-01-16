#include <iostream>
using namespace std;

class Node{
public:
int item;
Node *prev;
Node *next;

Node(int item){
  this->item = item;
  this->prev = NULL;
  this->next = NULL;
}
};

class LinkedList{
Node *Head, *Tail;
public:

LinkedList(){
  Head = NULL;
  Tail = NULL;
}

void InsertatBeg(int data)
{
  Node *newnode = new Node(data);
  if(Head == NULL)
  {
    Head = newnode;
    Tail = newnode;
  }
  else{
    newnode->next = Head;
    Head->prev = newnode;
    Head = newnode;
  }
}

void InsertatEnd(int data)
{
  Node *newnode = new Node(data);
  if(Head == NULL)
  {
    Head = newnode;
    Tail = newnode;
  }
  else{
    newnode->prev = Tail;
    Tail->next = newnode;
    Tail = newnode;
  }
}

void DeleteFrmBeg(){
  Node *temp = Head;
  if(Head == NULL)
    cout<<"\n Oops List is Empty";
  else if(Head == Tail){
    Head = NULL;
    Tail = NULL;
    delete temp;
  }
  else{
    Head = Head->next;
    cout<<"\n Removed elem is"<<Head->item;
    Head->prev = NULL;
    delete temp;
  }
}

void DeleteFrmEnd(){
  Node *temp = Head;
  if(Head == NULL)
    cout<<"\n Oops List is Empty";
  else if(Head == Tail)
  {
    Head = NULL;
    Tail = NULL;
    delete temp;
  }
  else{
    temp = Tail;
    Tail = Tail->prev;
    cout<<"\n Removed elem is"<<Tail->item;
    Tail->next = NULL;
    delete temp;
  }
}


void display()
{
  Node *temp = Head;
  do{
    cout<<temp->item<<" ";
    temp = temp->next;
  }
  while(temp->next != NULL);
}

};




int main() {
  LinkedList A;
  A.InsertatBeg(20);
  A.InsertatBeg(20);  
  A.InsertatBeg(20); 
  A.InsertatEnd(80);  
  A.InsertatEnd(80);
  cout<<endl;
  A.DeleteFrmBeg();
  cout<<endl;
  A.DeleteFrmEnd();



  A.display();


  return 0;
}

