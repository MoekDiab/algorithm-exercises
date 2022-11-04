

public class Main{
  
  public static LinkedList<Integer> merge(LinkedList<Integer> first, LinkedList<Integer> second) {
    LinkedList<Integer> result = new LinkedList<>();

    for(int i = 0, j = second.size() - 1; i < first.size() && j >= 0; i++, j--) {
      result.add(first.get(i) + second.get(j));
    }

    return result;
  }


  public static int[] removeFirstOccurrence(int[] array, int target) {
      int[] result = new int[array.length - 1];

      int index = 0;

      for(int i = 0; i < array.length; i++) {
        if(array[i]  == target) {
          index = i;
          break;
        }
      }

      for(int i = 0, k = 0; i < array.length; i++) {
          if(i != index) {
            result[k] = array[i];
            k++;
          }
      }

      return result;

  }
  public static void main(String[] args) {
    
  }
}
