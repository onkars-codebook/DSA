import java.util.Scanner;

public class powerOf2orNot {
    public static boolean isPowerOfTwo(int num){
        if ((num & (num - 1)) == 0 ) {
            return true;
        }else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (isPowerOfTwo(num)) {
            System.out.println("Power of 2 ");
        }
    }
}
