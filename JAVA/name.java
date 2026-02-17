import java.util.Scanner;
public class name{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter a number a:");
        int a =sc.nextInt();
                System.out.println("enter a number b:");
        int b = sc.nextInt();
        int sum = a + b;                               //int sum = sc.nextINT();
        System.out.println("The sum of " + a + " and " + b + " is: " + sum);
    }
}
