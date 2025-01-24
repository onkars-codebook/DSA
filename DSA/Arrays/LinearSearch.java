import java.util.Scanner;
//Time coomplexity is O(n)
public class LinearSearch {
    public static void main(String[] args) {
        int arr[] = new int[10];
        int key;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter elements :");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter a Key ");
        key=sc.nextInt();
        
        for (int i = 0; i < arr.length; i++) {
            if(key == arr[i])
            {
                System.out.println("Key found at position :"+(i+1));
            }
        }
    }
}