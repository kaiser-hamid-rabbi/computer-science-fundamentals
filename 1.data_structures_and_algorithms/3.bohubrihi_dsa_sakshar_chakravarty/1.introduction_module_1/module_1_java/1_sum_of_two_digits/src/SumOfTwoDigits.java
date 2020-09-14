import java.util.Scanner;
class SumOfDigits {
    static int sumOfDigits(int first_digit, int second_digit) {
        return first_digit + second_digit;
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a integer number: ");
        int a = s.nextInt();
        System.out.print("Enter another integer number: ");
        int b = s.nextInt();
        System.out.println("Sum: " + sumOfDigits(a, b));
    }
}