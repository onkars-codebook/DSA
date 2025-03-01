import java.util.*;

public class FindMax {
    public static void findMaxElement(int matrix[][]) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print("Matrix[" + i + "]" + "[" + j + "] = ");
                matrix[i][j] = sc.nextInt();
            }
            System.out.println();
        }
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }
        }
        System.out.println("Maximum element :" + max);
        sc.close();
    }

    public static void main(String[] args) {
        int[][] matrix = new int[2][3];
        findMaxElement(matrix);
    }
}