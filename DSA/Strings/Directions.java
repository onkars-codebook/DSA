public class Directions {
    public static float CheckDistance() {
        String dir = "NS";
        int X = 0, Y = 0;
        for (int i = 0; i < dir.length(); i++) {
            if (dir.charAt(i) == 'E') {
                X++;
            } else if (dir.charAt(i) == 'W') {
                X--;
            } else if (dir.charAt(i) == 'N') {
                Y++;
            } else if (dir.charAt(i) == 'S') {
                Y--;
            }
        }
        int x2 = X * X;
        int y2 = Y * Y;
        return (float) Math.sqrt(x2 + y2);
    }
    public static void main(String[] args) {
        float num = CheckDistance();
        System.out.println(num);
    }
}