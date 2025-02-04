import java.util.Scanner;
//complete this code to improve the time complexity from O(n^3) to the O(n^2)
public class MaximumSubarray2 {
    public static void main(String[] args) {
        int size = 5;
        int maxSum = Integer.MIN_VALUE;
        int sum;
        int arr[] = new int[size];
        int prefixArray[] = new int[size];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        //calculating an prefix array 
        prefixArray[0] = arr[0];
        for (int i = 1;i < prefixArray.length; i++) {
            prefixArray[i] = prefixArray[i-1] + arr[i];
        }

        for (int i = 0; i < prefixArray.length; i++) {
            int start = i;
            for (int j = i; j < prefixArray.length; j++) {
                int end = i;
                sum =  start == 0 ?   prefixArray[end] : prefixArray[end] - prefixArray[start -1 ];
                if(maxSum <  sum ){
                    maxSum = sum;
                }
            }
        }
        System.out.println(maxSum);
        sc.close();
    } 
}