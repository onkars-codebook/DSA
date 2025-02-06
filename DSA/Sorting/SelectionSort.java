public class SelectionSort {
    //Select the minimum from unsorted and move it to beginning
    public static void selectionSort(int[] arr){
        int temp, k = 0;
        for (int i = 0; i < arr.length; i++) {
            int min = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[min] > arr[j]) {
                    min = j;
                }
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
           System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) {
        int[] arr = {1,2,4,3,2,5};
        selectionSort(arr);
    }
}