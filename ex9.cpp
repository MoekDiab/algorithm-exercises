/*9. Accumulating Array
Write a function that takes in array and returns a new array containing the accumulating sum.
accumArray([1,2,3,4]) -> [1,3,6,10]
accumArray([1,5,7]) -> [1,6,13]
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> accumArray ( vector<int> m) 
{
  int sum=m[0];
  int length = m.size();
  for (int i=0;i<length;i++)
  {
    if (i==0) 
    {
      sum=m[i];
      m[0]=sum;
    }
    else 
    {
      sum = m[i] +sum;
      m[i]=sum;
    }
  }
  return m;
}
int main()
{

vector <int> m ={1,2,3,4};
vector<int> F = accumArray (m);
for (int i=0; i< F.size();i++)
{
  if (i==0) cout <<"[";
  
  cout << F[i]<< ",";
  if (i==F.size()-1) cout <<"]";
}


}