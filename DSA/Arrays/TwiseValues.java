public class TwiseValues {
    // Given an integer array nums, return true if any value appears at least twice
    // in the array, and return false if every element is distinct.
    public static boolean isValueAppearsTwise(int[] arr) {
        boolean flag = false;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (arr[i] == arr[j]) {
                    if (i == j) {
                        continue;
                    }
                    flag = true;
                }
            }
        }
        return flag;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 6, 3};
        boolean value = isValueAppearsTwise(arr);
        System.out.println(value);
    }
}
