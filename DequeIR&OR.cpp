
#include <iostream>
using namespace std;
int queue[10], n=5, front = -1, rear = -1;
void Insertqueue(int val)
{
  
  if(rear > n-1)
  {
    cout<<"Overflow";
  }
  else{
    if(front == -1)
    {
      front = 0;
    }
    rear++;
    queue[rear] = val;
  }
}

void InsertqueueF(int val)
{

  if(front == 0)
  {
    cout<<"Queue Overflow";
  }
  else{
    if(front == -1)
    {
      front = 0;
      rear = 0;
    }
    front++;
    queue[front] = val;
  }
}

void Removequeue(){
if(front == -1)
{
  cout<<"Underflow";

}
  else{
    if(front >= rear)
    {
      front = -1;
      rear= -1;
    }
    else{
      cout<<"\n Removed element"<<queue[front];
      front++;
    }
  }
}

void RemovequeueRear(){
if(front == -1)
{
  cout<<"Underflow";

}
  else{
    if(front == rear)
    {
      front = -1;
      rear= -1;
    }
    else{
      cout<<"\n Removed element"<<queue[rear];
      rear--;
    }
  }
}

void display(int arr[]){
  for(int i=front; i < rear + 1 ; i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<"\n";
}
int main() {

Insertqueue(5);
  Insertqueue(4);
  Insertqueue(7);

  display(queue);
}