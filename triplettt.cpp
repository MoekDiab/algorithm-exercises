#include <iostream>
#include <string>
#include <vector>
using namespace std;

void triplet (vector<int> m,int target)
{
  for (int i=0;i<m.size();i++)
  {
    for (int j=i+1;j<m.size();j++)
    {
      for (int k=j+1;k<m.size();k++)
      {
        if (m[i]+m[j]+m[k]==target) {
          cout << "["<<m[i]<<","<<m[j]<<","<<m[k]<<"]"<<"\n";
          
        
        }
        
      }
    }
  }
}



int main ()
{
int target=0;
vector <int> m={0,-1,2,-3,1};
triplet(m,target);
}