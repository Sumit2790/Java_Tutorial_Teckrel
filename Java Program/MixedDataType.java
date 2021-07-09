class MixedDataType

{
   public static void main(String[]args)
{
   int a=5; int b=7;
   double x=3.7, y=8.0;
   int sum1= a+b;
   double sum2= x+y;
   double sum3= a+y;

   int sub1= a-b;
   double sub2= x-y;
   double sub3= a-y;
   int mul1= a*b;
   double mul3= a*y;
   double div2= x/y;
   double div3= a/y;

   System.out.println( "5 + 7= "+sum1);
   System.out.println( "3.7 + 8.0= "+sum2);
   System.out.println( "5 + 8.0= "+sum3);
   System.out.println( "5 - 7= "+sub1);
   System.out.println( "3.7 - 8.0= "+sub2);
   System.out.println( "5 - 8.0= "+sub3);
   System.out.println( "5 * 7= "+mul1);
   System.out.println( "5 + 8.0= "+mul3);
   System.out.println( "3.8 / 8.0= "+div2);
   System.out.println( "5 + 8.0= "+div3);
}
}