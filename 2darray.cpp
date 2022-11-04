#include <iostream>
#include <string>
#include <vector>
using namespace std;

 vector<int> maTrix (int m,int n)
{
  int l[m][n];
   
  for (int j=0;j<n;j++)       
{
  for(int i=0;i<m;i++)
  {
  if (l[i][j]==0)
  {
    int row = i;
    int column = j;
    l[row]=0;
    l[column]=0;
  }
  cout<< l[i][j];
  }
  }
  }


int main ()
{
int m;
int n;
int l[m][n]= {3,1,2},{5,0,4};
maTrix(2,3);

}
 



