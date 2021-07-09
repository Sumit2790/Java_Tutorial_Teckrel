//print the result of the specified operations.

class SpecificOperation{

   void expression(){
   int a=11;
   int b= 12;
   System.out.println(" Result of 1st expression is : " +(a+b) );
}

  void expression1(){
   int a=1;
   int b= 5;
   System.out.println(" Result of 1st expression is : " +(a*b) );
}

  void expression2(){
   int a=36;
   int b= 3;
   System.out.println(" Result of 1st expression is : " +(a/b) );
}

  void expression3(){
   int a=6;
   int b= 3;
   System.out.println(" Result of 1st expression is : " +(a-b) );
}


public static void main(String[]args)
{

   SpecificOperation sp= new SpecificOperation ();
   sp.expression();
   sp.expression1();
   sp.expression2();
   sp.expression3();
}

}


