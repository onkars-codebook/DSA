import java.sql.Array;

public class RoateArray {
    // There is an integer array nums sorted in ascending order 
    //(with distinct values).Prior to being passed to your function, 
    //nums is possibly rotated at an unknown pivot  index 
    //k (1  <=  k  <  nums.length)  such  that  the  resulting  array  
    //is [nums[k], nums[k+1],   ...,   nums[n-1], nums[0],   nums[1],   
    //...,   nums[k-1]] (0-indexed).   For   example, [0,1,2,4,5,6,7] might
    //be rotated at pivot 3 and become [4,5,6,7,0,1,2]  
    public static int roateAndFind(int[] arr,int pivot){   
        int tempPivot = pivot;
        int[] roatatedArr = new int[arr.length]; 
        for (int i = 0; i < roatatedArr.length; i++) {
            roatatedArr[i] = roatatedArr[tempPivot];
            tempPivot++;
        }
        return 0;
    }

}
