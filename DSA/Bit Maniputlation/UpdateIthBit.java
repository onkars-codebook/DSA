import java.util.*;
public class UpdateIthBit {
    public static int updateBit(int n, int bit, int i){
        if(bit == 0){
            int bitMask = ~(i<<1);           
            return n & bitMask; 
        }
        else{
            int bitMask =  1<<i;
            return n | bitMask;
        }
    }   
    public static void main(String[] args) {
          System.out.println("Enter Bit :");
          Scanner sc = new Scanner(System.in);
          int bit = sc.nextInt();
          int result = updateBit(5,1,0);
    } 
}
