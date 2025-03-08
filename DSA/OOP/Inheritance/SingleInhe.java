public class SingleInhe {
    public static void main(String[] args) {
       Dog vodafone = new Dog();
       vodafone.color ="White";
       vodafone.eat(); 
       vodafone.printColor();
    }
}
class Animal{
    String color;
    public void eat(){
        System.out.println("Hi I am animal !");
    }
    public void printColor(){
        System.out.println("I am "+this.color);
    }
} 

class Dog extends Animal{
    Dog(){
        super.color = "Black";
        System.out.println("I am dog ");
    }
}