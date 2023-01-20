import java.util.*;


class startup {

    Scanner sc = new Scanner(System.in);

    String s_name;
    void getstartup_name()
    {
        System.out.println();
        System.out.print("Enter Startup Name : ");
        s_name = sc.next();
    }
    
}

class department extends startup {

    Scanner sc = new Scanner(System.in);
    
    int emp_id;
    String name, email;
    String depart_name;
    String salary;

    void getdepartment_name()
    {
        System.out.println();
        System.out.print("Enter your id : ");
        emp_id = sc.nextInt();

        System.out.print("Enter your name : ");
        name = sc.next();

        System.out.print("Enter your email : ");
        email = sc.next();

        System.out.print("Enter your department name : ");
        depart_name = sc.next();
        System.out.println();

	  System.out.print("Enter your Salary Package : ");
        salary = sc.next();
        System.out.println();
    }

}

class Company extends department
{
    void display()
    {
        System.out.println();
        System.out.println("Startup name : "+s_name);
        System.out.println("Employee id  : "+emp_id);
        System.out.println("Name         : "+name);
        System.out.println("Email id   : "+email);
        System.out.println("Department name : "+depart_name);
	  System.out.println("Salary : "+salary);
        System.out.println();
    }
    public static void main(String args[])
    {
            Scanner sc = new Scanner(System.in);

            Company a = new Company();
            Company a1 = new Company();
            Company a2 = new Company();


            a.getstartup_name();
            a.getdepartment_name();
            
            a1.getstartup_name();
            a1.getdepartment_name();
            
            a2.getstartup_name();
            a2.getdepartment_name();
            
		
		System.out.println("========= Entered Details ========= ");
            a.display();
            a1.display();
            a2.display();
    }
}
