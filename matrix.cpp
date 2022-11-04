public class Moe {

public static int[][] maTrix (int m[][])
{
  int r= m.length;
  int c=m[0].length;
  int n[r][c];
  for (int i=0;i<r;i++)       
{
  for(int j=0;j<c;j++)
  {
  if (m[i][j]==0)
  {
    n[i]=0;
    n[j]=0;
    
  }
  else n[i][j]=m[i][j];
  }
  }
  return n;
  }



  }








public static void main (String [] args)
{
int m[2][3]={ {3,1,2},{5,0,4} };
faryta(2,3);

}
 








