import java.util.Scanner;
public class Basics
{
    public static void main(String[] args) {
       //Declaring an array 
       int arr[] = new int[10];  // declaring an array of size 10
       //Taking an input from the user 
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Your Array elements are :");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}   
