public class HirarchicalInhe{
    public static void main(String[] args) {
       Dog dog = new Dog();
       System.out.println("Dog is :"+dog.Color);
    }
}
class Animal {
    String Color;
    Animal(){
        System.out.println("I am animal!");
    }   
}

class Rabit extends Animal {
    Rabit(){
        super.Color =  "white";
    }
}

class Dog extends Animal{
    Dog(){
        super.Color = "Black";
    }
}