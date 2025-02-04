import java.util.Scanner;

public class MaximumSubarray {
    public static void main(String[] args) {
        // declaring an array
        int arr[] = new int[5];
        int sum;
        int max = Integer.MIN_VALUE;
        Scanner sc = new Scanner(System.in); // constant that defines the smallest value.
        System.out.println("Enter the values in the array ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < arr.length; i++) {
            int start = i;
            for (int j = i; j < arr.length; j++) {
                int end = j;
                sum = 0;
                for (int k = start; k <= end; k++) {
                    sum = sum + arr[k];
                }
                System.out.println("Addition of subarray : " + sum);
                if (max < sum) {
                    max = sum;
                }
            }
        }
        System.out.println("Addition of maximum subarray : " + max);
        sc.close();
    }
}