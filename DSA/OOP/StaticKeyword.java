public class StaticKeyword {
    public static void main(String[] args) {
        Animal dog = new Animal();
        dog.species = "pigyy";
        
        Animal cat = new Animal();
        System.out.println(cat.species); // piggy 
    }
}
class Animal {
     static String species;
}