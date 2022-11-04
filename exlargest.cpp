public class Farhat {

  public static int farHat (int m[])
  {
    int size =m.length();
    sort(m);
    int large= m[size-3];
    return large;  
  
  }
  public static void main (String []args){
    int m[]={1,2,4,5,6};
    System.out.println(farHat(m));


  
  }
}