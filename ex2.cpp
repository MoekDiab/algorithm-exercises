#include <iostream>
#include <string>
using namespace std;
/*
2. Write a program in C to count the digits of a given number using recursion
N= 50
Expected Output :
The number of digits in the number 50 are 2
*/
int Count (int num)
{
  int counter =0;
  while (num!=0)
  {
     num= num / 10;
     counter++;
  }
  return counter; 
}

int cc(int number,int count)

{ 
  number=number/10;
  if (number==0) return count ;
return cc(number,++count);

}

int countRecurssive(int n)
{
  return cc(n,1);
}
 
int farhat (int s)
{
  if (s==0)return 0;
  return  1 + farhat (s/10);
}

int main ()
{
cout << farhat (100);



}