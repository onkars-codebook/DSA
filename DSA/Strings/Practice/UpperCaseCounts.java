public class UpperCaseCounts {
    public static int countsUppercase(String str){
        int count=0;
        char charArr[] = str.toCharArray();
        for (int i = 0; i < charArr.length; i++) {
            if (charArr[i] == 'a'||charArr[i] == 'e'|| charArr[i]=='i'|| charArr[i]=='o'|| charArr[i]=='u') {
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        int count = countsUppercase("Hi this is onkar sathe");
        System.out.println(count);
    }
}