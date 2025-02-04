public class MaximumSubarray3 {
    //TIME COMPLEXITY : O(N)
    //this is solved by using the theorm of Kadane's algorithm 
    public static void kadanes(int arr[]){
        int currentSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int size = 5;
        for (int i = 0; i < arr.length; i++) {
            currentSum = currentSum + arr[i];
            if(currentSum  < 0){
               currentSum = 0; 
            }
            maxSum = Math.max(currentSum, maxSum);
        }
        System.out.println("Maximum subarray sum is :"+maxSum);
    }
    public static void main(String[] args) {
        int size = 5;
        int arr[] = {-2,-3,4,-1,-2,1,5,-3};
        // in the case where all the array values are the negetive then it will return the valu - 0
        kadanes(arr);
    }
}
