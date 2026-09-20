import java.util.Scanner;

public class ConsoleInputProcessor {
    public static void main(String[] args) {
        // 1. Initialize the Scanner to read from standard input
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.println("=== User Data Processing ===");

            // 2. Read a full line of text (String)
            System.out.print("Enter your full name: ");
            String name = scanner.nextLine();

            // 3. Read an integer (int)
            System.out.print("Enter your age: ");
            int age = scanner.nextInt();

            // 4. Read a decimal value (double)
            System.out.print("Enter your hourly wage ($): ");
            double hourlyWage = scanner.nextDouble();

            // 5. Process the input data
            // Assuming 40 hours a week, 52 weeks a year
            double annualSalary = hourlyWage * 40 * 52; 
            int yearsToRetirement = Math.max(0, 65 - age);

            // 6. Display the processed results
            System.out.println("\n--- Processing Results ---");
            System.out.println("Hello, " + name + "!");
            System.out.println("At " + age + " years old, you are " + yearsToRetirement + " years away from retirement (age 65).");
            System.out.printf("Based on your wage of $%.2f/hr, your estimated annual salary is $%.2f.%n", hourlyWage, annualSalary);

        } catch (Exception e) {
            System.out.println("Error: Invalid input format. Please enter numbers for age and wage.");
        } finally {
            // 7. Always close the scanner to release system resources
            scanner.close();
        }
    }
}
