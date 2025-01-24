import java.util.*;
public class BinarySearch {
    // Binary Search Algorithm.
    public static void main(String[] args) {
        int flag=0;
        int arr[] = new int[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Array elements :");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter a Key :");
        int key = sc.nextInt();
        int start = 0;
        int end = arr.length-1;
        int mid;
  
        while (start <= end) {
            mid = (start + end) / 2; 
            if (arr[mid] == key) {
                System.out.println("Found at Position " + (mid + 1));
                flag = 0;
                return;
            } else if (arr[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        flag = 1;
        }
        if (flag == 1) {
            System.out.println("Not found ");
        }
    }
}