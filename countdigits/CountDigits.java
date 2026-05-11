public class CountDigits {
  public static int countDigit(int n) {
           if(n == 0) return 1;
        int number = n;
        int count = 0;
        while( number > 0) {
            number = number / 10;
            System.out.print(number + " ");
            count++;
        }
        // System.out.print(count);
        return count;
    }
    public static void main(String[] args) {
        int count = countDigit(1234);
        System.out.print(count);
    }
}
