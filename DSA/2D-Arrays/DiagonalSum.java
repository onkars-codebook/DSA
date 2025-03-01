public class DiagonalSum {
    public static void calculateSum(int[][] Matrix) {
        // Time Complxity = O(N)^2
        // int sum = 0;
        // for (int i = 0; i < Matrix.length; i++) {
        // for (int j = 0; j < Matrix[0].length; j++) {
        // if (i == j) {
        // sum = sum + Matrix[i][j];
        // }
        // if (i + j == Matrix.length - 1) {
        // sum = sum + Matrix[i][j];
        // }
        // }
        // }
        // if (Matrix.length % 2 != 0) {
        // sum -= Matrix[Matrix.length - 1 / 2][Matrix.length - 1 / 2];
        // }

        int sum = 0;
        for (int i = 0; i < Matrix.length; i++) {
            // Primary Diagonal
            sum += Matrix[i][i];
            // Secondary Diagonal
            if (i != Matrix.length - i - 1) {
                sum += Matrix[i][Matrix.length - i - 1];
            }
        }
        System.out.println("Sum  = " + sum);
    }

    public static void main(String[] args) {
        int[][] Matrix = { { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 12 },
                { 13, 14, 15, 16 } };
        calculateSum(Matrix);
    }
}