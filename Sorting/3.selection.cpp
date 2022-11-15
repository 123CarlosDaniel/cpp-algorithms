#include <iostream>
#include "utils.h"

using namespace std;

void selectionSort(int arr[], int n) {
  for (int i{}; i<n;i++)
  {
    int j = i ;
    for (int k = i + 1; k<n;k++){
      if (arr[k] < arr[j]){
        j = k;
      }
    }
    swapInArray(arr,i ,j);
  }
}

int main() {
  int n;
  cout<<"Enter the value N : ";
  cin>>n;
  int arrNum[n];
  GenerateArr(arrNum, n);
  Print(arrNum, n);
  selectionSort(arrNum, n);
  Print(arrNum, n );  
}