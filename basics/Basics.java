// import java.util.Scanner;

// class Test {
//   public void printTest() {
//     System.out.println("Text Class");
//   }
// }

class BankAccount {
  double balance;
  public BankAccount() {
    balance = 100.0;
  }
  public void printBalance() {
    System.out.println(balance);
  }
}

public class Basics {
  public static void main(String[] args) {
    // test.printTest();
    BankAccount test = new BankAccount();
    test.printBalance(); 
  }
}


// // buffered

