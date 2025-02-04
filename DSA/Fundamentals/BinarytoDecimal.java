import java.util.Scanner;
public class BinarytoDecimal {
    public static void main(String[] args) {
        String bin = "";
        System.out.println("Enter Your Choise : ");
        System.out.println("1 Decimal to Binary ");
        System.out.println("2. Binary to decimal ");
        Scanner sc = new Scanner(System.in);
        String ch = sc.next();

        switch (ch) {
            case "1":
                System.out.println("Enter a Number : ");
                int num = sc.nextInt();
                while (num != 0) {
                    if (num % 2 != 0) {
                        bin = "1" + bin; // Prepend '1' if the number is odd
                    } else {
                        bin = "0" + bin; // Prepend '0' if the number is even
                    }
                    num = num / 2; // Divide the number by 2
                }
                System.out.println(bin);
                break;
            case "2":
                System.out.println("Enter Your Binary Number ");
                int binNum = sc.nextInt();
                int DecNum = 0;
                int rem;
                int i = 0; 
                while (binNum != 0) {
                    rem = binNum % 10;
                    DecNum += rem * Math.pow(2, i); // Multiply by 2^i and add to the decimal number
                    i++;
                    binNum = binNum/10;
                }
                System.out.println("Decimal is :" + DecNum);
                break;

            default:
                break;
        }

    }
}