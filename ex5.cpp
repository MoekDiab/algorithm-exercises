/*
5. Quadratic equation.

Implement a function to find the root value of X in any quadratic equation.

ax^2 + bx + c

Example

quadratic(3, 5, - 4) must return the root value of X */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double getRoot ( int a , int b , int c)
{
 int delta = b*b - 4*a*c;
 double root = (-b-2*sqrt(delta))/2*a;
return root;

}
 int main () 
 {
double M = getRoot (1,2,1);
cout << M ;

 }