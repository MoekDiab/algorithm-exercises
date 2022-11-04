



#include <iostream>


using namespace std;

void countBack(int start, int end)
{
  if (start==end)return;
  cout << start <<" ";
  countBack (--start,end);
}
int factorial(int n)
{
  if (n==0) return 1;
  return n * factorial (n-1);
}
int findSmallest (int nums[],int size)
{
  int p=nums[0];
for (int i=0; i < size ;i++)
{
  if ( nums[i]< p )  p=nums[i];
  
}
return p;


}

int main() {
  
int nums[]={20,30,80,-30,12,17,100};
int size= sizeof (nums)/sizeof (nums[0]);
 int F = findSmallest (nums,size);
 cout << F;
}
