import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        // Decimal to Binary
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a Decimal Number");
        int number = scanner.nextInt(); // 8
        String binary = "";
        while(number>0){
            int rem = number % 2;
            number = number / 2;
            binary = rem + binary;
        }
        System.out.println(binary);
    }
}
