#include <iostream>
#include "utils.h"

using namespace std;

void BubleSort(int arr[],int n) {
  for(int i{}; i < n ; i++){
    int k = n - 1;
    while ( k > 0)
    {
      if (arr[k] < arr[k-1]) {
        swapInArray(arr, k , k - 1);
      }
      k--;
    }
  }  
}

int main() {
  int n;
  cout<<"Enter the number of elements : ";
  cin>>n;
  int arr[n];
  GenerateArr(arr,n);
  Print(arr,n);
  BubleSort(arr, n);
  Print(arr,n);
}