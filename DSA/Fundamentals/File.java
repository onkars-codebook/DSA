import java.util.Scanner;

public class File {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int start,end;
        System.out.println(
            "Staring point :"
        );
        start = sc.nextInt();
        System.out.println(
            "Ending  point :"
        );
        end = sc.nextInt();
        
        while (start != end) {
            int i = 2;
            while (start % i != 0) {
                i++;
            }
            if(start == i){
                System.out.print(start+",");
            }
          start++;
        }
        
    }
}