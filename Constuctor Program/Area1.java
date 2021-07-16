class Area{
  public static void print(int x,int y){
    System.out.println(x*y);
  }
  public static void print(int x){
    System.out.println(x*x);
  }
}

class Area1{
	public static void main(String args[]){
	Area a =new Area();
	a.print(3,2);
	a.print(3);
	}

}