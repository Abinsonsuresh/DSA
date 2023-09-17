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

void Deletion(int arr[], int size,  int position)
{
    for(int i = position; i< size - 1 ; i++)
    {
        arr[i] = arr[i+1];
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


    cout << "\nEnter the position of the element to delete from the array ";
    cin >> position;

    Deletion(arr, n, position);
    n = n - 1;
    display(arr, n);


    return 0;
}