import java.util.*;
class OnesComplement{
	public static void main(String[] arg){
		int a = 5;
		System.out.println("Enter a number: ");
		Scanner sc = new Scanner(System.in);
        int num  = sc.nextInt(); 
		int bitMask =1;
		if((num & bitMask) == 0){
                   System.out.println("Even Number ");	
		}else{
		System.out.println("Odd number");
		}
	}
}
