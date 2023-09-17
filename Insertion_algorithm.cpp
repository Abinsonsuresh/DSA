// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}

void insertion(int arr[], int size, int element, int position)
{
    for(int i = size - 1; i>=position ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position] = element;
    cout<<"\n inserted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int i, arr[100], n, element, position;
    cout << "\nEnter the no. of elements in the array ";
    cin >> n;
    cout << "\nEnter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    display(arr, n);

    cout << "\nEnter the element to insert into the array ";
    cin >> element;

    cout << "\nEnter the position of the element to insert into the array ";
    cin >> position;

    n = n + 1;
    insertion(arr, n, element, position);
    // display(arr, n);


    return 0;
}