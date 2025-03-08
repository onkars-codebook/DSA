public class ClassAndObjects{
    public static void main(String[] args){
        Fruit apple = new Fruit();
        apple.setName("Apple","Sweet",12);
        apple.getInfo();
        System.out.println(apple.name);   
       // System.out.printl(apple.quantity);
        
        BankAccount user1 = new BankAccount();
        user1.setName("OnkaR sathE");
        System.out.println(user1.AC_holderName);

    }
}
class BankAccount{
     public String AC_holderName;
     private String Password;
     public void setName(String name){
        this.AC_holderName = name;
     }
}
class Fruit{
    String name;
    String taste;
    private int quantity;
    public void setName(String name, String taste, int quantity){
        this.name =  name;
        this.taste = taste;
    }
    public void getInfo(){
        System.out.println("Name: "+this.name +"\n"+"Taste: "+this.taste);
    }
}
