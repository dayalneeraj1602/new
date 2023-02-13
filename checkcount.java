public class checkcount{

  public static void main(String[]args){
    String s = "aaabbb";
    int countOfA = 0;
    int countOfB = 0;

    for (int i = 0; i < s.length (); i++)
      {

	if (s.charAt (i) == 'a')
	  {
	    countOfA++;
	  }
	if (s.charAt (i) == 'b')
	  {
	    countOfB++;
	  }
      }

    if (countOfA == countOfB)
      {
	System.out.println (s);
      }
    
    if (countOfA >= 1 && countOfB == 0)
      {
	System.out.println ("a*");
      }
      else
      {
	System.out.println ("a*b+");
      }
  }
}
