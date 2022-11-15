#include <iostream>
#include <cstdlib>
#include "utils.h"
using namespace std;

// Time Complexity : O(n^2), it uses two loops, in the while loop,
// j is defined depending on i and in the worst case it will iterate until 
// j is equal to 0 
// Space Complexity : O(1)
void InsertionSort(int *arrNum, int n){
  for (size_t i = 1; i < n; i++)
  {
    int key = arrNum[i];
    int j = i-1;
    // ascending > , descending <
    while (j>=0 and arrNum[j]>key)
    {
      arrNum[j+1] = arrNum[j];
      j--;
    }
    arrNum[j+1] = key; 
  }
};

int main()
{
  int n;
  cout << "Enter a number N: ";
  cin >> n;
  int arrNum[n];
  GenerateArr(arrNum, n);
  Print(arrNum, n);
  InsertionSort(arrNum, n);
  Print(arrNum, n);
}
