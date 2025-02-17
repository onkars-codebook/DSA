public class CountingSort {
    // Tip : Dry run the code to better understand
    // Method is suitable when there are fewer distinct elements.
    public static void countingSort(int[] arr) {

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            max = Math.max(max, arr[i]); // find : Maximum Number
        }

        int count[] = new int[max + 1];

        // Calculate frequencies of each element
        for (int i = 0; i < arr.length; i++) {
            count[arr[i]]++;
        }

        int j = 0;
        // Sorting the elements
        for (int i = 0; i < count.length; i++) {
            while (count[i] > 0) {
                arr[j] = i;
                j++;
                count[i]--;
            }
        }

        // Print sorted array
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void main(String[] args) {
        // Used when the range of elements is small
        int[] arr = { 3, 4, 5, 3, 2, 7 };
        countingSort(arr);
    }
}
