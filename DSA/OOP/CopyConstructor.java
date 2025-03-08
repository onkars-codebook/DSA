import java.util.Arrays;

public class CopyConstructor {
    private int x;
    private int y;
    private int[] arr;

    // Default constructor
    public CopyConstructor(int x, int y, int[] arr) {
        this.x = x;
        this.y = y;
        this.arr = arr;
    }

    // Shallow copy constructor
    public CopyConstructor(CopyConstructor other) {
        this.x = other.x;
        this.y = other.y;
        this.arr = other.arr; // Shallow copy
    }

    // Deep copy constructor
    public CopyConstructor(CopyConstructor other, boolean deepCopy) {
        this.x = other.x;
        this.y = other.y;
        if (deepCopy) {
            this.arr = Arrays.copyOf(other.arr, other.arr.length); // Deep copy
        } else {
            this.arr = other.arr; // Shallow copy
        }
    }

    // Getters
    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int[] getArr() {
        return arr;
    }

    public static void main(String[] args) {
        int[] array = { 1, 2, 3 };
        CopyConstructor original = new CopyConstructor(10, 20, array);

        // Shallow copy
        CopyConstructor shallowCopy = new CopyConstructor(original);
        // Deep copy
        CopyConstructor deepCopy = new CopyConstructor(original, true);

        // Modify the original array
        array[0] = 99;

        System.out.println("Original array: " + Arrays.toString(original.getArr()));
        System.out.println("Shallow copy array: " + Arrays.toString(shallowCopy.getArr()));
        System.out.println("Deep copy array: " + Arrays.toString(deepCopy.getArr()));
    }
}
