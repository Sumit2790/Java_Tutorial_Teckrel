class AddAmount
{
     int amount = 50;

    public AddAmount()
    {

    }

    public AddAmount(int x)
    {
        amount = x + amount;
    }

    public void displayAmount()
    {
        System.out.println(amount);
    }
}

class PigggieBank
{
    public static void main(String[] args)
    {
        AddAmount a = new AddAmount();
        AddAmount b = new AddAmount(150);
        a.displayAmount();
        b.displayAmount();
    }
}