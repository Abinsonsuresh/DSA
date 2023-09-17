// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionSort(int arr[], int size, int element, int position)
{

    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;


    // Lopp for passes from 1 to n-1 (5-> 1 - 4 indxs)
    for (int i = 1; i < size; i++)
    {
        int key = arr[i]; // i=1
        int j = i - 1;    // j=0  if i =2 j = 1 i=3 j= 2
        // loop for each passes(pass 1, 2...)
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // j = 1 ; o th elmnt to 1st position
            j--;                 // i =2 ( j = 2 ) //at last j become -1 and break the loop
        }
        arr[j + 1] = key;  // aftert breaking the loop at -1 index j + 1 = 0 and element stores at 0th indx
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

    n += 1;
    insertionSort(arr, n, element, position);
    cout << "\n sorted array is : ";
    display(arr, n);

    return 0;
}