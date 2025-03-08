public class Anagrams {
    public static boolean isAnagram(String str1,String str2){
        if (str1.length() != str2.length()) {
            return false;
        }
        char[] charArr1 = str1.toCharArray();
        char[] charArr2 = str2.toCharArray();
        java.util.Arrays.sort(charArr1);
        java.util.Arrays.sort(charArr2);
        return java.util.Arrays.equals(charArr1, charArr2);
    }
    public static void main(String[] args) {
        boolean res = isAnagram("hello","elloh");
        System.out.println(res);
    }    
}