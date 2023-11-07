
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
    rear = (rear + 1) % n;
    queue[rear] = val;
  }
}

void Removequeue(){
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
      cout<<"\n Removed element"<<queue[front];
      front += 1 % n;
    }
  }
}



void display(int arr[]){
  for(int i=front; i != rear ; i+= 1 % n)
    {
      cout<<arr[i]<<" ";
    }
  cout<<"\n";
}

int main() {

  Insertqueue(70);
  Insertqueue(5);
  Insertqueue(4);
  Insertqueue(40);
  Insertqueue(47);




  display(queue);
}