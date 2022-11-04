#include <iostream>
#include <string>
using namespace std;


bool Farhat (string m)
{
int length= m.length();
for (int i=0;i<length;i++)
{
  for (int j=i+1;j<length;j++)
  {
    if ( m[i]==m[j])
    { 
      return false;
    }
  }
}
return true;
}





int main()
{
string moe= "ali";
bool D=Farhat(moe);
cout << D;

}
