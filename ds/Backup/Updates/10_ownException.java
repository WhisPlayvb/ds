import java.util.Scanner;
import java.io.*;
import java.util.concurrent.locks.ReentrantReadWriteLock.ReadLock;
class Invalid_data_Exception extends Exception
{ 
public Invalid_data_Exception (String str) 
{ 
super(str); 
} 
} 
public class ownException
{ 
static void display(int r,String n,String b,Float c){
System.out.println("\n\n\t=== Displaying student data ===\n");
System.out.println("Name : "+n);
System.out.println("Roll no : "+r);
System.out.println("Branch : "+b);
System.out.println("CGPA : "+c);
}
static void details (int r,String n,String b,Float c) throws Invalid_data_Exception{ 
if(r<=0){ 
throw new Invalid_data_Exception(" Invalid number \n\nYou are out of registration process"); 
// return; 
}
if(n==null){
throw new Invalid_data_Exception(" Invalid name\n\nYou are out of registration process");
// return; 
} 
if(b==null){ 
throw new Invalid_data_Exception(" Invalid branch\n\nYou are out of registration process"); 
// return; 
}
if(c<0 || c>10){ 
throw new Invalid_data_Exception(" Invalid CGPA\n\nYou are out of registration process"); 
// return; 
} 
System.out.println("Successfull Registration!!"); 
display(r,n,b,c);
} 
public static void main(String args[]) 
{ 
System.out.println("\n\t\t*** Create own exception class ***\n");
System.out.println("\n\t=== Student Database ===\n");
Scanner sc = new Scanner(System.in);
System.out.print("Enter Roll No: ");
int roll=sc.nextInt();
System.out.print("Enter Name: ");
String name=sc.next();
System.out.print("Enter Branch: ");
String branch=sc.next();
System.out.print("Enter CGPA: ");
float cgpa=sc.nextFloat();
try
{ 
// calling the method 
details(roll,name,branch,cgpa); 
} 
catch (Invalid_data_Exception ex) 
{ 
System.out.println("\nCaught the exception"); 
System.out.println("\nException occured: " + ex); 
} 
} 
} 