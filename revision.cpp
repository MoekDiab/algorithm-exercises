#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Sum (vector<int> nums, int target)
{
  int length=nums.size();
  for (int i=0;i<length;i++)
  {
    for (int j=i+1;j<length;j++)
    {
      if (nums[i]+nums[j]==target) cout<<"["<<i<<","<<j<<"]"<<"\n";
    }
      }
}

bool unique (string m)
{
  int size =m.length();
  for (int i=0;i<size;i++)
  {
    for (int j=i+1;j<size;j++)
    {
      if (m[i]==m[j]) 
      { cout<<"Characters in the string are not unique  ";
        return false; }
    }
  }
  cout<<"Characters in the string are unique   ";
  return true;
}

void odd (int n)
{
for (int i=1;i<=n;i++)
{ int counter=0;
  for (int j=1; ;j+=2)
  { if (counter==i) break;
    cout<<j<<" ";
    counter++;
    }
    cout<< "\n";
  } 
}

int factorial (int n)
  {
    if (n==0) return 1;
    return n * factorial(n-1);
  }

/*
public class Main
{
    public static int sum(int n)
    {
    if (n==0) return 0;
    return n % 10 + sum (n/10);
    }
	public static void main(String[] args) {
		System.out.println(sum(501));
	}
}
*/

/*public class Main
{
     public static int find (int m[])
  {
    for (int i=0;i<m.length;i++)
    {
    for (int j=i+1;j<m.length;j++)
    {
        int temp=0;
        if (m[j]<m[i])
        {
            temp=m[j];
            m[j]=m[i];
            m[i]=temp;
        }
    }
    }
    return m[0];
  }
	public static void main(String[] args) {
	    
    int m[]={9,0,2,1,5,90};
    int n= find(m);
    System.out.print(n);
  }
*/

/*
public class Main
{
    public static int find(int m[])
    {
        for (int i=0;i<m.length;i++)
        {
            for (int j=i+1;j<m.length;j++)
            {
                int temp=0;
                if (m[j]>m[i])
                {
                    temp=m[j];
                    m[j]=m[i];
                    m[i]=temp;
                }
            }
        }
        return m[2];
    }
	public static void main(String[] args) {
		
		int m[]={7,39,20,10,203,204,503,201};
		int n = find(m);
		System.out.println(n);
	}
}
*/

int main ()
{
 /* 
 vector<int> nums= {2,7,11,15};
Sum(nums,26); 
*/

 /*
 string m="ali";
bool f = unique(m);
cout<<f;
*/

/*
odd(8);
*/

/*
int fact= factorial(5);
cout << fact;
*/


}