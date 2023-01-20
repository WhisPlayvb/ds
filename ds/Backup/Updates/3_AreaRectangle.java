import java.util.Scanner;

class area_1{
    Scanner sc = new Scanner(System.in);
    int length;
    int breadth, area;
    void getDim(int length,int breadth)
    {
        System.out.println("Enter the lenght of Rectangle: ");
        length = sc.nextInt();
        sc.nextLine();
        System.out.println("Enter the breadth of Rectangle:");
        breadth = sc.nextInt();
    }
    public void getArea()
    {
        area = length * breadth;
        System.out.println("Area = "+area);
    }
}

public class AreaRectangle {
    public static void main(String[] args) {

	area_1 a = new area_1();
	a.getDim();
	a.getArea();
    }
}