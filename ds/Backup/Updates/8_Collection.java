import java.util.ArrayList;
import java.util.Scanner;

public class Collection 
{
    public static void main(String[] args) 
 {
     ArrayList<Integer> a = new ArrayList<>();
    int s;
    Scanner sc = new Scanner(System.in);
    System.out.print(" Enter How Many Elements You Want to Insert: "); s=sc.nextInt();
    for (int i = 0; i < s; i++) 
    {
    System.out.print(" "); a.add(sc.nextInt());
}
int min = a.get(0);
    int max = a.get(0);
    int flag=1;
    for (Integer i : a)
     {
    if (min>i) 
    {
    min=i;
    }
if (max<i) {
 max=i;
 }
 if (min!=i) {
flag=0;
 }
 }
 if (flag==0) {
 System.out.println(" Min Value of Our List: "+min);
 System.out.println(" Max Value of Our List: "+max);
 }
 else{
 System.out.println(" All Elements Are Equal");
 }
 sc.close();
 } 
}
