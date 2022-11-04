public class Farhat {

  public static boolean check (String m)
  {
    String m.tolowerCase();
    int size= m.length();
    for (int i=0;i<size;i++){
    if (m.charAt[i]!=m.charAt[size-1-i])
    {
     return false;
    }
    }
    return true;
  }
  public static void main ( Strings [] args)
  {
  String m= "WOWOW";
  int numb=5;
 Sytem.out.println(check(m));
 System.out.println(recU(numb));
 
  }


  public static int recU (int numb)
 {
  if (numb==0) return 0;
  return numb % 10 + recU(numb/10);
 }

  public static void oddLines ( int m)
  {
    int counter = 0;
    for (int i=0;i<m;i++)
    {
      for (int j=1; ; j+=2)
      {
        System.out.println (j + " ");
        if (i==counter) break;
      }
      counter++;
    }


  }


    }
 
 