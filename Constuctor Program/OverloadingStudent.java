class studentName{
     String ss;
    String name;
  public studentName(String ss){
      name = ss;
  }
  public studentName()
  {
      name = "unknown";
  }
}
class OverloadingStudent{
    public static void main(String[] args) {
        studentName obj = new studentName();
        obj.ss = "Sumit";
        System.out.println(obj.ss);
        System.out.println(obj.name);

    }
}