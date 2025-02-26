import java.util.*;
class Palindrome{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String : ");
        String str = sc.next();
        boolean flag = false;
        for(int i = 0; i < str.length() / 2; i++){
            if(str.charAt(i) != str.charAt(str.length() - 1 - i)){
                flag = false;
                break;
            }
            flag = true;
        }
        if(flag == true){
            System.out.println("String is Palindrome !");
        }else{
            System.out.println("String is not Palindrome!");
        }
    }
}