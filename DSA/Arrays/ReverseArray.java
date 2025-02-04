import java.util.Scanner;
public class ReverseArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of the array :");
        int size = sc.nextInt();
        int arr[] = new int[size];
        int reverseArray[] = new int[size];
        for (int i = 0; i < arr.length; i++) {
        arr[i] = sc.nextInt();
        }
        //storing into an reverse array 
        int j = 0;
        for (int i = arr.length-1; i >= 0; i--) {
            reverseArray[j] = arr[i];
            j++;
        }
        System.out.println("Reverse : ");
        for (int i = 0; i < reverseArray.length; i++) {
            System.out.println(reverseArray[i]);   
        }
    }
}
