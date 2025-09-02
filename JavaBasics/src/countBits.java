import java.util.ArrayList;

public class countBits {
    public static void main(String[] args) {
        int n = 5;
        ArrayList<Integer> numbers = new ArrayList<>();
        for(int i = 0; i <= n; i++) {
            int currentIndex = i;
            int count = 0;
            while(currentIndex > 0) {
                int rem = currentIndex % 2;
                currentIndex = currentIndex / 2;
                if(rem != 0) {
                    count += 1;
                }
            }
            numbers.add(count);
        }
        for(int num : numbers) {
            System.out.println(num);
        }
    }
}
