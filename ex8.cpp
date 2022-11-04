/*
One two, skip a few.
Create a function that calculates how many numbers are missing from an ordered number array.
Examples
howManyMissing([1,3]) - > 1
howManyMissing([1,3,5,7,9,11]) - > 5
howManyMissing([1,2,3,4]) - > 0
*/ 
#include <iostream>
#include <string>
using namespace std;


int howMany (int m [],int size)
{
  int counter= m[0];
  int sum=0;
  for (int i=0;i<size;i++) 
  {
    if (m[i]!=counter) 
    {sum=sum+(m[i]-counter);
    counter = m[i] + 1;
    }
    else counter+=1;
  }
  return sum;
}
int main ()
{
int m[]={2,9,10,17,30};
int size = sizeof(m)/sizeof(m[0]);
cout << howMany (m,size);
}


