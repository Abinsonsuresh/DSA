#include <iostream>
using namespace std;

class Node
{
public:
    int item;
    Node *link;

    Node(int item)
    {
        this->item = item;
        this->link = NULL;
    }
};

class LinkedList
{
    Node *Head;

public:
    LinkedList()
    {
        Head = NULL;
    }

    void insertAtBeg(int item)
    {
        Node *newnode = new Node(item);
        if (Head == NULL)
        {
            Head = newnode;
        }
        else
        {
            newnode->link = Head;
            Head = newnode;
        }
    }

    void insertAtEnd(int item)
    {
        Node *newnode = new Node(item);
        if (Head == NULL)
        {
            Head = newnode;
        }
        else
        {
            Node *temp = Head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }

    void insertAtPos(int item, int key)
    {
        Node *newnode = new Node(item);
        if (Head == NULL)
        {
            Head = newnode;
        }
        else
        {
            Node *temp = Head;
            while (temp->link != NULL && temp->item != key)
            {
                temp = temp->link;
            }
            if (temp->link == NULL)
            {
                cout << "\n Oops Key not found";
            }
            else
            {
                // newnode->item = item;
                newnode->link = temp->link;
                temp->link = newnode;
            }
        }
    }

    void DeleteAtbeg()
    {
        Node *temp = Head;
        if (Head == NULL)
        {
            cout << "\n List Empty";
        }
        if (temp->link == NULL)
        {
            Head = NULL;
        }
        else
        {
            Head = Head->link;
        }
    }

    void DeleteAtEnd()
    {
        Node *temp = Head;
        if (Head == NULL)
        {
            cout << "\n List Empty";
        }
        if (temp->link == NULL)
        {
            Head = NULL;
        }
        else
        {
            Node *temp2;
            while (temp->link != NULL)
            {
                temp2 = temp;
                temp = temp->link;
            }
            temp2->link = NULL;
        }
    }

        void DeleteAtPos(int key){
        Node* temp = Head;
        if(Head == NULL)
        {
            cout<<"\n List Empty";
        }
        if(temp->item == key)
        {
            Head = Head->link;
        }
        else{
           Node* temp2;
           while (temp->link != NULL && temp->item != key)
           {
            //key val at temp2
            temp2 = temp;
            temp = temp->link;
           }
           temp2->link = temp->link;
           
        }
    }

    void display()
    {
        Node *temp = Head;
        while (temp->link != NULL)
        {
            cout << temp->item << " ";
            temp = temp->link;
        }
    }
};

int main()
{
    LinkedList Obj;
    Obj.insertAtBeg(10);
    Obj.insertAtBeg(12);
    Obj.insertAtBeg(14);
    Obj.insertAtEnd(99);
    Obj.insertAtEnd(88);
    Obj.insertAtEnd(77);
    Obj.insertAtPos(100, 12);

    Obj.display();
    cout<<"\n";

    Obj.DeleteAtbeg();
    Obj.DeleteAtEnd();
    Obj.DeleteAtPos(99);

    Obj.display();
    

    return 0;
}