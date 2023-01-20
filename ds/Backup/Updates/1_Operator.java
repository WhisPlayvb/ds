import java.util.Scanner;

public class Assignment_1{

 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);

  System.out.print("Input 1st number: ");       //1st Input from user
  int num1 = sc.nextInt();

  System.out.print("Input 2nd number: ");       //2nd Input from user
  int num2 = sc.nextInt();

  System.out.println("Addition of two numbers: "+(num1 + num2));

  System.out.println("subtraction of two numbers: "+ (num1 - num2));

  System.out.println("Multiplication of two numbers: "+(num1 * num2));

  System.out.println("Division of two numbers: " +(num1 / num2));

  System.out.println("Remainder of two numbers: "+(num1 % num2));
 }

}
