import java.util.Scanner;

public class LargestNum {
 public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the Number of elements : ");
    int num = sc.nextInt();
    int arr[] = new int[num];
    for (int i = 0; i < arr.length; i++) {
        System.out.print("Enter "+i+" th element :");
        arr[i]=sc.nextInt();
    }
    int max = arr[0]; 
    for (int i = 1; i < arr.length; i++) { 
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    System.out.println("Maximum Number is: " + max);
    
 }   
}
