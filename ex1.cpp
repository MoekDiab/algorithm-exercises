#include <iostream>
#include <string>
using namespace std;

int getSum (int start, int end)
{
  int sum=0;
  for (int i= start; i <= end; i++ )
  {
   sum = i + sum; 
  }
  return sum;
}
int mSum (int begin, int final,int sum)
{
  if( begin == final) return sum + final;
  return mSum (++begin,final,sum=sum+begin);
}





int main(){
int M = mSum(1,5,0);
cout << M ;

}