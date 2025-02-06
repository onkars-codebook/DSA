import java.util.Scanner;

public class BubbleSorting {
    public static void BubbleSort(int arr[]){
        int temp;
        for (int i = 0; i <= arr.length-2; i++) {
            for (int j = 0; j < arr.length-2-i; j++) {
                if(arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        System.out.println("After Bubble sort : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) {
         int[] arr = new int[5];
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter an array elements  : ");
         for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
         }
    BubbleSort(arr);
    }
}