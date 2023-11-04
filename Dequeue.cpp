
#include <iostream>
using namespace std;
int queue[10], n=5, front = -1, rear = -1;
//Enqueue
void InsertQueue(int val){
  if(rear == n-1)
  {
    cout<<"\nQueue UnderFlow";
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
//Dequeue
void DeleteQueue(){
  if(front == -1)
  {
    cout<<"\n Queue Underflow";
  }
  else{
    if(front >= rear)
    {
      //when front and rear becomes equal there is only one element left
      front = -1;
      rear = -1;
    }
    else{
      cout<<"\n Removed element"<<queue[front];
      front++;
      //when we delete then only the front value increase result in FIFO
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
  int val,val2;
  cout<<"Enter the value to be inserted to the queue\n";
  cin>> val;
  InsertQueue(val);
cout<<rear<<endl;
  cout<<"Enter the value to be inserted to the queue\n";
  cin>> val2;
  InsertQueue(val2);
  cout<<rear<<endl;
  display(queue);
  
  DeleteQueue();

cout<<"\nAfter Deletion";
  display(queue);
}