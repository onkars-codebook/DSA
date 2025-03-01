//Time complexity : O(n+m)
public class StairCaseSearch {
    public static boolean search(int[][] Matrix, int key) {
        //We can consider top-right as our element or bottom-left
        int row = 0;
        int column = Matrix.length - 1;
        while (row < Matrix.length && column >= 0) {
            if (key == Matrix[row][column]) {
                System.out.println("Key found at : (" + row + " " + column + ")");
                return true;
            } else if (key > Matrix[row][column]) {
                row++;
            }else if(key < Matrix[row][column]){
                column--;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int[][] mat = { { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 } };
        if(search(mat,3)){
            System.out.println("Success!");
        }
    }
}