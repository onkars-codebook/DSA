import java.util.Scanner;
public class ArrArgs {
    public static void main(String[] args) {
        int marks[] = new int[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Marks of the 5 subjects");
        for (int i = 0; i < marks.length; i++) {
        marks[i] = sc.nextInt();
        }        
        //calling by the value 
        findAvg(marks);
    }
    public static void findAvg(int arr[]){
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }
        int avg = sum / arr.length;
        System.out.println("You got :"+avg);
    }
}
