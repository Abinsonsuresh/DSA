#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void SelectionSort(int arr[], int n)
{
  for(int i = 0; i< n-1 ;i++)
    {
      int min = i;
      for(int j = i+1; j<n; j++)
        {
          if(arr[j]<arr[min])
            min = j;
        }
      swap(&arr[min], &arr[i]);
    }
}

void display(int arr[], int n)
{
  for(int i =0 ; i<n ; i++)
    {
      cout<<arr[i]<<" ";
    }
}

int main() {
  int arr[5] = {10,24,57,9,4};
  SelectionSort(arr,5);
  display(arr, 5);
  return 0;
}

