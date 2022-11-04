/*
7. Wash your hands.
It takes about 21 seconds to wash your hands.
Create a function that takes the number of times a person washes their hands
 N and the number of months they follow this routine M. 
Calculate the duration in minutes and seconds a person spends washing their hands. 
Example
WashHands(8,7) -> "588 minutes and 0 seconds" 
WashHands(7,9) -> "661 minutes and 30 seconds"
*/
#include <iostream>
#include <string>
using namespace std;

void WashHands(int a , int b)
{
  int m = a * 21;
  int n = b * 30;
  int seconds = m*n%60;
  int minutes = (m*n - seconds)/60;
  cout << minutes <<" minutes and "<< seconds <<" seconds";
  return;

}
int main ()
{
WashHands(7,9);
}