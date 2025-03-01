public class Question2 {
    public static void findNumofkey(int[][] Matrix, int GivenRow) {
        int sum = 0;
        for (int row = 0; row < Matrix.length; row++) {
            for (int col = 0; col < Matrix[row].length; col++) {
                if (row == GivenRow) {
                    sum = sum + Matrix[row][col];
                }
            }
        }
        System.out.println("Sum = "+sum);
    }

    public static void main(String[] args) {
        int[][] Matrix = { { 1, 2, 3, 4 },
                { 5, 6, 7, 8 },
                { 9, 10, 11, 7 },
                { 13, 7, 15, 16 } };
        findNumofkey(Matrix,1);
    }

}
