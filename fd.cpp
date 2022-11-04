#include <iostream>
#include <string>
using namespace std;

 void oddLines ( int m)
  {
    
    for (int i=1;i<=m;i++)
    {
      int counter=0;
      for (int j=1; ; j+=2)
      {
        if (i==counter) break;
        cout<< j <<" ";
        counter++;
      }
      cout << "\n";
      
    }
  }
int main () 
{
oddLines(3);
}