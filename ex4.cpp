#include <iostream>
#include <string>
using namespace std;
 /*
 4. Censored string problem.
Implement two functions that censor and uncensor any given string.
Example:
S = "I Love Programming"
Expected Output:
Censor (S) - > "* L*v* Pr*gr*mm*ng"
 */

void cenSored (string a)
{
 int size =a.length();
 for (int i=0;i<size;i++)
 {
  if (a[i]=='i'||a[i]=='o'||a[i]=='e'||a[i]=='u'||a[i]=='a'||a[i]=='I'||a[i]=='O'||a[i]=='E'||a[i]=='U'||a[i]=='A') cout <<"*";
  else cout << a[i];
 }
 

}
int main () 
{

cenSored("I love Programming");


}