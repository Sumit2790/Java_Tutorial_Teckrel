import java.util.Scanner;

class java{
     String ss;
    String name ;
    public java(String ss)
    {
        name = ss;
    }
    public java(){
        name = "I love programming languages ";
    }
        }

public class JavaProgramming {
    public static void main(String[] args) {
        java obj = new java();
        obj.ss = "Java";
        System.out.println("I love " + obj.ss);
        System.out.println(obj.name);

    }
}