public class GetSetBit {
    public static int getIthBit(int i){
        int bitMask = 1<<i; int n = 5;
        if((n & bitMask)==0){
            return 0;
        }else{
            return 1;
        }
    } 
    public static int setIthBit(int n, int i){
        int bitMask = 1<<i;
        return (n|bitMask);
    }
    public static int clearBit(int n, int i){
        int bitMask = ~(1<<i);
        return (n & bitMask);
    }
    public static void main(String[] args) {
        
    } 
}
