#include <iostream>
using namespace std;

const int n = 5;
int top = -1, top2 = n;
int stack[n];

// void push(int item)
// {
//     if(top >= n-1)
//     {
//         cout<<"\nStack Overflow";
//     }
//     else{
//         top++;
//         stack[top] = item;
//     }
// }

// void pop(){
//     if(top == -1)
//     {
//         cout<<"\n Stack Underflow";
//     }
//     else{
//         cout<<"\n Popped elementy is "<<stack[top]<<"\n";
//         top--;
//     }
// }

// void display()
// {
//     for(int i = 0; i< top + 1 ; i++)
//     {
//         cout<<stack[i]<<" ";
//     }
//     cout<<"\n";
// }

void MSPush1(int item)
{
    if (top < top2 - 1)
    {
        top++;
        stack[top] = item;
    }
    else
    {
        cout << "\nStack Overflow";
    }
}

void MSPush2(int item)
{
    if (top < top2 - 1)
    {
        top2--;
        stack[top2] = item;
    }
    else
    {
        cout << "\nStack Overflow";
    }
}

void MSPop1()
{
    if (top >= 0)
    {
        cout << "\n Popped element " << stack[top] << "\n";
        top--;
    }

    else
    {
        cout << "\n Stack Underflow";
    }
}

void MSPop2()
{
    if (top2 < n)
    {
        cout << "\n Popped element " << stack[top2] << "\n";
        top2++;
    }

    else
    {
        cout << "\n Stack Underflow";
    }
}

void display1()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << "\n";
}

void display2()
{
    for (int i = top2; i < n; i++)
    {
        cout << stack[i] << " ";
    }
    cout << "\n";
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        cout << stack[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // push(12);
    // push(22);
    // push(82);

    // display();

    // pop();

    // display();

    MSPush1(12);
    MSPush2(22);
    display1();

    display2();

    display();

    MSPop1();
    MSPop2();

    display();

    return 0;
}