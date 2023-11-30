#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(){
  this->data = 0;
  this->next = NULL;
}
Node(int item)
{
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
//Insertion at the End
void InsertNode(int item){
  
Node* newnode = new Node(item);

  if(Head == NULL)
  {
    Head = newnode;
  }
  else{
    Node* temp = Head;
    while(temp->next != NULL)
      {
        temp = temp->next;
      }
    temp->next = newnode;
  }
}

//Insert the node at the beginning
void InsertNodeatBeg(int item){

Node* newnode = new Node(item);

  if(Head == NULL)
  {
    Head = newnode;
  }
    
  else{
   newnode->next = Head;
    Head = newnode;
  }
}

//Insert the node at the certain position
void InsertNodeatPos(int item, int key){

Node* newnode = new Node(item);

  if(Head == NULL)
  {
    Head = newnode;
  }

  Node* temp = Head;
  while(temp->next!=NULL && temp->data!=key)
    {
      temp = temp->next;
    }
  if(temp->next == NULL)
  {
    cout<<"\n Key Position not found";
  }
  else{
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->data = item;
  }
  
}


//Delete a node from beg
void DeleteBeg(){

  Node* temp = Head;

  if(Head == NULL)
  {
    cout<<"\n List is empty";
  }

  else if(temp->next == NULL)
  {
    Head = NULL;
  }
  else{
    Head = Head->next;
  }

}


//Delete a node from End
void DeleteEnd(){

  Node* temp = Head;

  if(Head == NULL)
  {
    cout<<"\n List is empty";
  }

  else if(temp->next == NULL)
  {
    Head = NULL;
  }
  else{
    //To get 2nd last node
    Node* temp2;

    while(temp->next != NULL)
      {
        //To get the 2nd last node temp2 is used
        temp2 = temp;
        temp = temp->next;
      }
    //from temp2 last node adrs deleted
    temp2->next = NULL;
  }

}

//Delete a node from position
void DeleteFPos(int key){

  Node* temp = Head;

  if(Head == NULL)
  {
    cout<<"\n List is empty";
  }

  else if(temp->data == key)
  {
    Head = Head->next;
  }
  else{
    //To get 2nd last node or node bfr key
    Node* temp2;

    while(temp->next != NULL && temp->data != key)
      {
        //To get the 2nd last node temp2 is used
        temp2 = temp;
        temp = temp->next;
      }
    //from temp2 last node adrs deleted
    temp2->next = temp->next;
  }

}


void Display(){
Node*temp = Head;
  if(Head == NULL)
  {
    cout<<"\n Linked List Empty";
  }

  while(temp != NULL)
    {
      cout<<temp->data<<" ";
      temp = temp->next;
    }
}


};

int main() {
  LinkedList Object;
  Object.InsertNode(5);
  Object.InsertNode(58);
  Object.InsertNodeatBeg(12);
  Object.InsertNodeatPos(77,5);
  Object.InsertNodeatPos(99,5);


  //Deletion
  Object.DeleteBeg();  
  Object.DeleteEnd();
  Object.DeleteFPos(5);




  cout<<"\n Items are";
  Object.Display();


  
}


