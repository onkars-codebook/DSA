import java.util.*;
public class Gettersetter {
    public static void main(String[] args) {
       Pen ballPen = new Pen();
       ballPen.setInk("Blue");
       String ink = ballPen.getInk(); 
       System.out.println("Color of the ink is:"+ink);
    }
}
class Pen {
    String ink;
    Scanner sc = new Scanner(System.in);
    void setInk(String color){
        this.ink = color;
    }
    String getInk(){
        return this.ink;
    }   
}