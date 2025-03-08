public class clearRangeOfBit {
    public static int clearBits(int n, int i, int j) {
        // Suppose : N = 10101010101001110
        // We suppose i = 0 and j = 4 then we need Bit mask like
        // 111111111100000 0 to 4 must be 0 and all other must be '1'
        // Now suppose i = 8 and j = 3
        /// suppose a - 111100000000 -1<<i
        // b - 000000000111 hint : 2^i-1 | i is numer of bits
        // ------------ OR of Both
        // 111100000111
        int a = (~0) << i;
        int b = (1 << i)-1;
        int bitMask = a | b;
        return n & bitMask;
    }

    public static void main(String[] args) {
         int res = clearBits(10, 2, 4);
         System.out.println("Result :"+res);
    }
}
