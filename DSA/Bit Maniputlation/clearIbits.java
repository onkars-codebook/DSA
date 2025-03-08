public class clearIbits {
    public static void main(String[] args) {
        int num = 15; // example number
        int i = 2; // example bit position
        System.out.println(clearBits(num, i));
    }

    public static int clearBits(int num, int i){
        //-1 (Binary = 11111111 
        int bitMask = -1 << i;
        return num & bitMask;
    } 
}
