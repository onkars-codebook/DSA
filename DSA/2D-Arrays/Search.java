import java.util.*;

public class Search {
    public static void searchAtIndex(int matrix[][]) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Enter a Key :");
        int key = sc.nextInt();
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (matrix[i][j] == key) {
                    System.out.println("Key found at index :" + i + "," + j);
                }
            }
            System.out.println();
        }
        sc.close();
    }

    public static void main(String[] args) {
        int[][] matrix = new int[2][3];
        searchAtIndex(matrix);
    }
}