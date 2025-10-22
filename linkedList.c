#include <stdio.h>     
#include <stdlib.h>

struct Node{
    int item;
    struct Node* link;
};

struct Node* head = NULL;

struct Node* createNode(int item){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    
    newnode->item = item;
    newnode->link = NULL;
    
    return newnode;
}


void insertAtEnd(int item)
{
    struct Node* newnode = createNode(item);
    if(head == NULL)
    {
        head = newnode;
    }
    
    struct Node* temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = newnode;
}


void insertAtBeg(int item){
    struct Node* newnode = createNode(item);
    if(head == NULL)
    {
        head = newnode;
    }
    newnode->link = head;
    head = nenwnode;
}


void deleteAtBeg(int item){

    if(head == NULL)
    {
        printf("EMPTY\n");
        return;
    }
    struct Node*temp = head;
    head = head->link;
    printf("removed %d \n",head->item);
    
}


void deleteAtEnd(int item){

    if(head == NULL)
    {
        printf("EMPTY\n");
        return;
    }

    if(head->link == NULL)
    {
       head= NULL;
        return;
    }
    struct Node*temp = head;
    struct Node*prev = NULL;

    while(temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link = NULL;
    printf("removed %d \n",temp->item);
    
}

void deleteFromKey(int key){

    if(head == NULL)
    {
        printf("EMPTY\n");
        return;
    }

    struct Node*temp = head;
    struct Node*prev = NULL;

    while(temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->link;
    }
    prev->link = temp->link;
    printf("removed %d \n",key);
    
}

void Display()
{
     if(head == NULL)
    {
        printf("NODATA");
    }

    struct Node* temp = head;
    while(temp->link != NULL){
        printf("%d ", temp->item);
        temp = temp->link;
        
    }
    
}


int main() {
printf("LINKED LIST");
insertAtEnd(10);
insertAtEnd(20);
insertAtEnd(40);
Display(); 

return 0;
}

