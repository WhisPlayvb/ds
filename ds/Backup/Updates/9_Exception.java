import java.io.*;

class Exception {
public static void main(String args[])
{
System.out.println("\n\t\t===== TYPES OF EXCEPTIONS =====\n");
try {
int a[] = { 1, 2, 3, 4, 5 };
System.out.println(a[5]);
try { 
int x = a[2] / 0;
}
catch (ArithmeticException e2) {
System.out.println("\ndivision by zero is not possible");
}
}
catch (ArrayIndexOutOfBoundsException e1) {
System.out.println("\nArrayIndexOutOfBoundsException");
System.out.println("\nElement at such index does not exists");
}
String ptr = null;
try
{
if (ptr.equals("gfg"))
System.out.print("\nSame");
else
System.out.print("\nNot Same");
}
catch(NullPointerException e)
{
System.out.print("\nNullPointerException Caught");
}
String s = "";
try
{
System.out.println("\n\nLength of string: "+getLength(s));
}
catch(IllegalArgumentException e)
{
System.out.println("\nIllegalArgumentException caught");
}
// String s set to a value and calling getLength()
s = "name";
try
{
System.out.println("\nLength of string: "+getLength(s));
}
catch(IllegalArgumentException e)
{
System.out.println("\nIllegalArgumentException caught");
}
s = null;
try
{
System.out.println(getLength(s));
}
catch(IllegalArgumentException e)
{
System.out.println("\nIllegalArgumentException caught");
}
}
public static int getLength(String s)
{
if (s == null)
throw new IllegalArgumentException("\nThe argument cannot be null");
return s.length();
}
}
