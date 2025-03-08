import java.util.*;
public class Introduction {
    public static void main(String[] args) {
        String name;
        System.out.println("Enter a String :");
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        System.out.println("Length of str : "+name.length());
        System.out.println("Character at index 1 is "+name.charAt(1));
    
    }
}
