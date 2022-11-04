/*
Geometry.
Write a function that takes the coordinates of two points 
on a two dimensional plane and returns the length of the line 
segment connecting the two points.
Example:
SegmentLength([15,7],[22,11]) -> 8.06
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double Seg (int m[], int n[])
{
double length = sqrt( (m[0]-n[0])*(m[0]-n[0]) + (m[1]-n[1])*(m[1]-n[1]) );
return length ;
}

int main ()
{
  int m[]= {15,7};
  int n[]= {22,11};
cout << Seg(m,n);
}