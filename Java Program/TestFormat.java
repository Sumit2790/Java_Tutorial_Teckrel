//import java.util.Calendar;
//import java.util.Locale;

public class TestFormat {
    
    public static void main(String[] args) {
      double pi = Math.PI;

      System.out.format("%f%n", pi);       // -->  "3.141593"
      System.out.format("%.3f%n", pi);     // -->  "3.142"
      System.out.format("%10.3f%n", pi);   // -->  "     3.142"
      System.out.format("%-10.3f%n", pi);  // -->  "3.142"
      System.out.format("%-10.4f%n%n", pi); // -->  "3,1416"

}

}