import java.util.Scanner;

public class ArrayPairs {
    public static void main(String[] args) {
        System.out.println("Enter the size of the array :");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                if(i != j){
                    System.out.println("("+arr[i]+","+arr[j]+")");
                }
            }
        }
    }
}