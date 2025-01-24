import java.util.Scanner;

public class SubArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10];
        System.out.println("Enter Array Values :");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        } 
        System.out.println("Enter starting point ");
        int start = sc.nextInt();
        System.out.println("Enter ending Point :");
        int end = sc.nextInt();
        for (int i = start; i <= end; i++) {
            System.out.println(arr[i]);
        }
    }
}