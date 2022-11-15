#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <cstdlib>

using namespace std;

void swapInArray(int arr[], int x, int y) {
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

void Print(int arrNum[], int n)
{
  cout << "Data : ";
  for (int i{}; i < n; i++)
  {
    cout << arrNum[i] << " ";
  }
  cout << endl;
}

void GenerateArr(int arrNum[], int n)
{
  for (int i{}; i < n; i++)
  {
    arrNum[i] = rand();
  }
}

#endif