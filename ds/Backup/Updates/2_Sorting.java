import java.util.*;

class StudentGrade 
{
        String name;
        int marks;
        char grade;
        Scanner sc = new Scanner(System.in);

        public void getStudentGrade(){
        System.out.println("Enter Name of Student: "); 
        this.name = sc.nextLine();
        System.out.println("Enter Marks of Student: "); 
        this.marks = Integer.parseInt(sc.nextLine());
	  System.out.println("\n");
 }
        public void calculateGrade(){
                if (this.marks>=80) 
                {
                    this.grade='A';
                } 
                else if (this.marks>60 && this.marks<80)
                {
                    this.grade='B';
                }
                else if (this.marks>=50 && this.marks<60)
                {
                    this.grade='C';
                }
                else if (this.marks>=45 && this.marks<50)
                {
                    this.grade='D';
                }
                else if (this.marks>=25 && this.marks<45)
                {
                    this.grade='E';
                }
                else{
                    this.grade='F';
                }
        } 
 
        public StudentGrade[] studSort(StudentGrade[]s)
   {
        		StudentGrade tmp = new StudentGrade();
        		for (int i = 0; i < s.length; i++) 
{
            		for (int j = i+1; j < s.length; j++) 
{
               			if (s[i].marks > s[j].marks) 
{
                    				tmp = s[i];
                    				s[i]=s[j];
                    				s[j]=tmp;
                    			}
          			}
   		}
            return s;
        }

         public void displayStudentGrade(){
                System.out.println();
                System.out.println(" Name: "+this.name);
                System.out.println(" Marks: "+this.marks);
                System.out.println(" Grade: "+this.grade);
        }
 
}

public class Sorting 
{
        public static void main(String[] args) {
        StudentGrade[] s = new StudentGrade[5];
        StudentGrade s1 = new StudentGrade();
        for (int i = 0; i < 5; i++) 
        {
        s[i] = new StudentGrade();
        }

        for (int i = 0; i < s.length; i++) 
        {
            s[i].getStudentGrade();
        }

        System.out.println("\n Student Data Before Sort:- "); 
 
       for (int i = 0; i < s.length; i++) 
        {
            s[i].calculateGrade();
            s[i].displayStudentGrade();
        }

        s = s1.studSort(s);
        System.out.println("\n Student Data After Sort:- "); 
        for (int i = 0; i < s.length; i++) 
        {
            s[i].displayStudentGrade();
        }
    }
}


