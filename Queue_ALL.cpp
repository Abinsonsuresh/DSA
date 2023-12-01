#include <iostream>
using namespace std;

const int n = 5;
int front = -1, rear = -1;
int queue[n];

//Insert at rear end
void InsertQ(int item)
{
    if (rear == n - 1)
    {
        cout << "\nQ Overflow";
    }
    else
    {
        if (front == -1)
        {
            front = 0; 
        }
        rear++;
        queue[rear] = item;
    }
}



//Insert at frontend
void InsertQF(int item)
{
    if (front == 0 && rear == n-1)
    {
        cout << "\nQ Overflow";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        front++;
        queue[front] = item;
    }
}

void DeleteQ()
{
    if (front == -1)
    {
        cout << "\nQ Underflow";
    }
    else
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if(front == n-1)
        {
            front = 0;
        }
        else
        {
            cout << "\n removed elm" << queue[front];
            front++;
        }
    }
}

void DeleteQR()
{
    if (front == -1)
    {
        cout << "\nQ Underflow";
    }
    else
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if(rear == 0)
        {
            rear = n-1;
        }
        else
        {
            cout << "\n removed elm" << queue[rear];
            rear--;
        }
    }
}

void display()
{
    for (int i = front; i < rear + 1; i++)
    {
        cout << queue[i] << " ";
    }
    cout << "\n";
}

int main()
{
    InsertQ(12);
    InsertQ(12);
    InsertQ(12);
    InsertQ(12);
    InsertQ(12);


    display();

    DeleteQ();
    display();

    return 0;
}