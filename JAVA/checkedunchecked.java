import java.io.*;

class checkedunchecked {
    public static void main(String[] args) {

        // Unchecked Exception
        try {
            int x = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Unchecked Exception");
        }

        // Checked Exception
        try {
            FileReader f = new FileReader("abc.txt");
        } catch (IOException e) {
            System.out.println("Checked Exception");
        }
    }
}
