#include <iostream>
#include <cstdlib>
#include "utils.h"
using namespace std;

// Time Complexity : O(n^2), it uses two loops, in the while loop,
// j is defined depending on i and in the worst case it will iterate until 
// j is equal to 0 
// Space Complexity : O(1)
void SimpleSort(int *arrNum, int n){
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = i+1; j < n; j++)
    {
      // Ascending 
      if(arrNum[i]>arrNum[j]) {
        int temp = arrNum[i];
        arrNum[i] = arrNum[j];
        arrNum[j] = temp;
      }
    }
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
  SimpleSort(arrNum, n);
  Print(arrNum, n);
}


