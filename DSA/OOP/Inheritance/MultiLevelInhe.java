public class MultiLevelInhe {
    public static void main(String[] args) {
        JohnRabit john = new JohnRabit();
        System.out.println("My color :"+john.Color);
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

class JohnRabit extends Rabit {
    String name = "John";
    JohnRabit(){
        System.out.println("Hello I am John the Rabit !");
    }
}
