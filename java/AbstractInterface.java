interface Transaction {
    void deposit(double amount);
    void withdraw(double amount);
}

abstract class BankAccount {
    String name;
    int accountNo;
    double balance;

    BankAccount(String name, int accountNo, double balance) {
        this.name = name;
        this.accountNo = accountNo;
        this.balance = balance;
    }

    abstract void calculateInterest();

    void displayAccount() {
        System.out.println("Name       : " + name);
        System.out.println("Account No : " + accountNo);
        System.out.println("Balance    : " + balance);
    }
}

class SavingsAccount extends BankAccount implements Transaction {

    SavingsAccount(String name, int accountNo, double balance) {
        super(name, accountNo, balance);
    }

    @Override
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited   : " + amount);
    }

    @Override
    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn   : " + amount);
        } else {
            System.out.println("Insufficient balance");
        }
    }

    @Override
    void calculateInterest() {
        double interest = balance * 0.05;
        System.out.println("Interest    : " + interest);
    }
}

public class AbstractInterface {
    public static void main(String[] args) {

        SavingsAccount account =
            new SavingsAccount("Aman", 101, 10000);

        account.displayAccount();

        account.deposit(2000);
        account.withdraw(1500);

        account.calculateInterest();

        System.out.println("Final Balance: " + account.balance);
    }
}