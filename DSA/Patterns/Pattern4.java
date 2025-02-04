public class Pattern4 {
// 1
// 10
// 101
// 1010
// 10101
// 101010
        public static void main(String[] args) {
            for (int i = 0; i <=5; i++) {
               for (int j = 0; j <= i; j++) {
                        if (j % 2 == 0) {
                            System.out.print(1);
                        }else{
                            System.out.print(0);
                        }
                  } 
                  System.out.println();
            }
        }
    }