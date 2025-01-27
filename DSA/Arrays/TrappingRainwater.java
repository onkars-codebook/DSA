public class TrappingRainwater {

    //Trapping Rainwater Problem
    //Given an array of non-negative integers height[] where each element represents the height 
    //of a block at that index, determine how much rainwater can be trapped after it rains.

    //O(n)
    public static int trappedRainwater(int height[]){
        int n = height.length;

        //calculate left max boundry
        int leftmax[] = new int[n];
        leftmax[0] = height[0];     
        for (int i = 1; i < n; i++) {
            leftmax[i] =  Math.max(height[i],leftmax[i-1]);
        }

        //calculate right max boundry 
        int rightMax[] = new int[n];
        rightMax[n-1] = height[n-1];
        //started from n-2 because n-1 is already initialized.
        for (int i = n-2; i >= 0; i--) {
            rightMax[i] = Math.max(height[i],rightMax[i+1]);
        }

        int trappedwater = 0;
        //loop 
        for (int i = 0; i < n; i++) {
            //water_level = min(leftmax boundry , right maxboundry) 
           int  water_level = Math.min(leftmax[i], rightMax[i]);
           //trapped water = water level -  height[i]
           trappedwater += water_level - height[i];
        }
        return trappedwater;
    }
    public static void main(String[] args) {
        int height[] = {4,2,0,6,3,2,5};
        int trappedWater = trappedRainwater(height);
        System.out.println("Trapped Water : "+ trappedWater);
    }
}