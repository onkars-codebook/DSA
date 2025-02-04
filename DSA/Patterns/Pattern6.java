public class Pattern6 {
//      *****
//     *   *
//    *   *
//   *   *
//  *****
    public static void main(String[] args) {
        int num = 4;
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num-i; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= num; j++) {
                if (j == 0 || j == num || i == 0 || i == num) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        for (int i = 0; i < num + 1; i++) {
            System.out.print("*");
        }
    }
}