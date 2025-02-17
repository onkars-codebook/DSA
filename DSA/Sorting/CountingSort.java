public class CountingSort {
    //Tip : Dry run the code to better understand 
    // Method is suitable when there are less number of elements.
    public static void countingSort(int[] arr) {

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            max = Math.max(max, arr[i]); // find : Maximum Number
        }
        int count[] = new int[max + 1];

        for (int i = 0; i < count.length; i++) {
            count[arr[i]]++; // calculate : frequencies of each ele
        }

        int j = 0;
        for (int i = 0; i < count.length; i++) {
            while (count[i] > 0) {
                arr[j] = i;
                j++;
                count[i]--;
            }
        }
    }

    public static void main(String[] args) {
        // Used when minimum number's are there

    }
}