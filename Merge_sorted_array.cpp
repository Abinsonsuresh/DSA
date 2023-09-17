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

void Sort(int arr[], int size)
{
    int i,j,key;
    for(i=1 ; i< size ; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        

    }
}

void Merge(int arr1[], int arr2[], int arr3[], int n, int n2)
{
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{

    int arr1[50], arr2[50], n = 0, n2 = 0, i;
    cout << "\nEnter the no. of elements in the 1st array ";
    cin >> n;
    cout << "\nEnter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter the no. of elements in the 2nd array ";
    cin >> n2;
    cout << "\nEnter the elements: ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    cout << "\nArray 1: ";

    display(arr1, n);

    cout << "\nArray 2: ";

    display(arr2, n2);
    int n3 = n + n2;
    int arr3[n3];
    Merge(arr1, arr2, arr3, n, n2);

    cout << "\nMerged array: ";

    display(arr3, n3);

    cout << "\nMerged array after sorting: ";
    Sort(arr3, n3);
    display(arr3, n3);

    return 0;
}