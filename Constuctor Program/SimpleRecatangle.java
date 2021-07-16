class area{
    int length; int breadth;


    public area()
    { 
        int length = 0;
        int breadth = 0;
    }

    public area(int lenght)
    {
        this.length = 4 ;
         breadth = 5;
    }
    public area(int length,int breadth)
    {
        this.length = 7;
        this.breadth = 8;
    }
    public void  m1()
    {
        System.out.println(length*breadth);
    }
}
class SimpleRecatangle {
    public static void main(String[] args) {
        area obj = new area();
        obj.m1();
        area obj1= new area (10);
        obj1.m1();
        area obj2 = new area (12,2);
        obj2.m1();

    }
}