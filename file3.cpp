#include <iostream>
#include <string>
using namespace std;

void printOdd(int n)
{
  for (int i = 1; i <= n; i++)
  {
    int counter = 0;
    for (int j = 1; ;j+=2)
    {
      cout << j << " ";
      counter++;

      if(counter == i) break;
    }
    cout << "\n";
  }
}



void printOddMethod2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    int counter = 0;
    int j = 1;
    while(counter != i) { 
      cout << j << " ";
      counter++;
      j+=2;`
    }
    cout << "\n";
  }
}


int main()
{
  printOddMethod2(5);
}