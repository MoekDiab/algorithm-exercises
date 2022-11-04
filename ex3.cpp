#include <iostream>
#include <string>
using namespace std;

void flip (string m)
{
  int size = m.length()-1;
  cout << size << "\n";
  for (int i=size; i>=0; i--)
  {
    cout<< m[i];
  }
  
}
void flop (string k, int i)
{
  int size= k.length()-1;
  if (size==0) {
    cout<< k[i];
    return;
  }
  return flop (k,++i);

}

int main ()
{
flop ("ali",0);

}