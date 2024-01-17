#include <iostream>
using namespace std;

int BinarySearch(int arr[], int high, int low, int targ)
{
  if(high >= low)
  {
    int mid = low + (high - low) / 2;

    if(arr[mid] == targ)
    {
      return mid;
    }
    if(mid > targ)
    {
      return BinarySearch(arr, mid - 1, low, targ);
    }

    if(mid < targ)
    {
      return BinarySearch(arr, high, mid + 1, targ);
    }
  }
  return -1;
}



void display(int arr[], int n){
  for(int i=0; i<n ; i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<"\n";
}

int main() {
  int arr[] = { 2, 3, 4, 10, 40 }; 
  int n = 5;
  int target = 4;
  int result = BinarySearch(arr, n - 1, 0, target);
  if(result == -1)
  {
    cout<<"Target nahi mila";
  }
  else{
    cout<<"\n Target found at:"<<result;
  }
}
