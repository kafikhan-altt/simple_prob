import java.util.Scanner;

public class prac{
   
   public static void main(String[] args){
      int code = 999;
      String defname = "default";
      String naam=defname;
      System.out.println("code\n"+code+"\n"+"name\n"+naam); 

    Scanner scanner= new Scanner(System.in);

    System.out.println("enter roll");
    int roll = scanner.nextInt();
     
   scanner.nextLine(); // Consume the newline character left by nextInt()

    System.out.println("name");
    String name =scanner.nextLine();

    System.out.println("ROLL\n"+roll+"\n"+"name\n"+name);

    scanner.close();
   }

}
  
