public class Constructors {
    public static void main(String[] args) {
        Student onkar = new Student("Onkar", 18);
        onkar.marks[0] = 92;
        onkar.marks[1] = 93;
        onkar.marks[2] = 83;
        onkar.printData();

        Student s1 = new Student(onkar);
        s1.printData();

        onkar.marks[0] = 100; 

        System.out.println("Main object :");
        onkar.printData();
        System.out.println("Copied Object :");
        s1.printData();  //chaanges are reflected here as well, because the onkar.marks and s1.marks refers to same array.
        // To overcome this we use deep copy and shalow copy 
        // Checkout : ./Notes/V_ShalowAndDeepCopy.png
    }
}

class Student {
    String name;
    int age;
    int[] marks = new int[3];

    // Default Construcors
    Student() {
        System.out.println("Object created of Student ! ");
    }

    // Paramatrized Constructor
    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Copy Constructor
    Student(Student s1) {
        this.name = s1.name;
        this.age = s1.age;
        this.marks = s1.marks;
    }

    void printData() {
        System.out.println("Name :" + this.name);
        System.out.println("Age :" + this.age);
        for (int j = 0; j < marks.length; j++) {
            System.out.println(this.marks[j]);
        }
    }
}
