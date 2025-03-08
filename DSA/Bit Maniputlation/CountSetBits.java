//Asked at : Google, Amazon.
public class CountSetBits {
    public static int countSetBits(int num){
         int count = 0;
         int bit = 1;
         while(num!=0){
            if ((num & 1) == 1) {
                count++;
            }
            num >>=1;
         }    
         return count;
    }
   public static void main(String[] args) {
        int count = countSetBits(15);
        System.out.println(count);
   } 
}
