import java.io.*;
import java.util.Scanner;
public class FileHandle {
 public static void main(String[] args) {
 File myFile = new File("my.txt");
 int ch;
 String s;
 Scanner sc = new Scanner(System.in);
 do {
 System.out.println("===== Select the operation to be performed ======");
 System.out.println(" \n1. Write \n 2. Read \n 3. Append \n 4. Delete \n 5. Exit");
 System.out.println("\n Enter Your Choice: ");ch=sc.nextInt();
 switch (ch) {
 case 1:
 try {
 FileWriter f = new FileWriter(myFile);
 System.out.println(" Enter String to Write: ");sc.nextLine();s=sc.nextLine();
 f.write(s);
 System.out.println(" Written...");
 f.close();
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 break;
 case 2:
 try {
 Scanner r = new Scanner(myFile);
 System.out.println(" File Contents: \n ");
 String data = "";
 while (r.hasNext()) {
 data += r.next();
 }
 System.out.println(data);
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 break;
 case 3:
 try {
 FileWriter f = new FileWriter(myFile,true);
 sc.nextLine();
 s=sc.nextLine();
 f.write("\n"+s);
 f.close();
 } catch (Exception e) {
 System.out.println(e.getMessage());
 }
 break;
 case 4:
 File m = new File("Created.txt");
 if (m.delete()) {
 System.out.println(" File Deleted....");
 }
 else{
 System.out.println(" File Not Deleted....");
 }
 break;
 case 5:
 System.exit(0);
 break;
 default:
 break;
 }
 } while (true);
 }
}
