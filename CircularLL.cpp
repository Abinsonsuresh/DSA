#include <iostream>

using namespace std;

class Node {
public:
    int item;
    Node *link;

    Node(int item) {
        this->item = item;
        this->link = NULL;
    }
};

class LinkedList {
    Node *head, *tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void InsertAtBeg(int data) {
        Node *newnode = new Node(data);
        if (head == NULL) {
            newnode->link = newnode;
            head = newnode;
            tail = newnode;
        } else {
            newnode->link = head;
            head = newnode;
            tail->link = newnode;
        }
    }

    void InsertAtEnd(int data) {
        Node *newnode = new Node(data);
        if (head == NULL) {
            newnode->link = newnode;
            head = newnode;
            tail = newnode;
        } else {
            newnode->link = head;
            tail->link = newnode;
            tail = newnode;
        }
    }

void DeletefrmBeg(){
  Node *temp = head;
  if(head == NULL)
  {
    cout<<"\n LL is empty";
  }
  else if(head == tail)
  {
    head = NULL;
    tail = NULL;
    delete temp;
  }
  else{
    head = head->link;
    tail->link = head;
  }
}

void DeletefrmEnd(){
  Node *temp = head;
  Node *temp1;
  if(head == NULL)
  {
    cout<<"\n LL is empty";
  }
  else if(head == tail)
  {
    head = NULL;
    tail = NULL;
    delete temp;
  }
  else{
    while(temp->link != head)
      {
        temp1 = temp;
        temp = temp->link;
      }
    tail = temp1;
    temp1->link =  head;
  }
}

    void display() {
        Node *temp = head;
       do{
         cout<<temp->item<<" ";
         temp = temp->link;
       }while(temp!=head);
    }
};

int main() {
    LinkedList A;
    A.InsertAtBeg(90);
    A.InsertAtBeg(70);
    A.InsertAtBeg(9);
  A.DeletefrmBeg();
    A.display();
  A.DeletefrmEnd();
  A.display();


    return 0;
}
