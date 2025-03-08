import java.util.Scanner;

public class Abstraction {
    public static void main(String[] args) {
       Operations op = new Operations();
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a number :"); 
       int num1 = sc.nextInt();
       System.out.println("Enter a Number :");
       int num2 = sc.nextInt();
       int sum = op.add(num1, num2);
       System.out.println("Sum :"+sum); 
    }
}

abstract class Math{
    public abstract int add(int a, int b);
    Math(){
        System.out.println("Constructor invoked from Math class ");
    }
}

class Operations extends Math{ 
    @Override
    public int add(int num1, int num2){
        return num1 + num2;
    }
}