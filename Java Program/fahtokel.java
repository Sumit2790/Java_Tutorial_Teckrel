// Write a program to convert temperature in Fahrenheit to Kelvin.

import java.util.Scanner;
class fahtokel
{
	public static void main(String [] args)
	{
		Double frh, kelvin;
		Scanner Scanner;
		Scanner=new Scanner(System.in);
		System.out.println("enter the temp in Fahrenheit:");
		frh=Scanner.nextDouble() ;
		kelvin = (5.0 / 9) * (frh - 32) + 273.15;
		System.out.println("temperature in kelvin:" +kelvin);
	}
}