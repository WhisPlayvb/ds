import java.util.Scanner;

class student {
    int roll_no;
    void getRoll(int n) {
        roll_no = n;
    }
    void putRoll() {
        System.out.println("Roll No :- "+roll_no);
    }
}

class test extends student {
    float marks1, marks2;
    void getMarks(float m1, float m2) {
        marks1 = m1;
        marks2 = m2;
    }
    void putMarks() {
        System.out.println("Marks 1 :- "+marks1);
        System.out.println("Marks 2 :- "+marks2);
    }
}

interface sports {
    float sports_marks = 9.5F;
    void putSports();
}

class result extends test implements sports {
    float total;
    public void putSports() {
        System.out.println("Sports Marks :- "+sports_marks);
    }
    void display() {
        total = marks1 + marks2 + sports_marks;
        putRoll();
        putMarks();
        putSports();
        System.out.println("Total Marks :- "+total);
    }
}

class Interface_demo {
    public static void main(String args[]) {
        result obj = new result();
        System.out.println();
        System.out.println("Name :");
        obj.getRoll(101);
        obj.getMarks(93.0F, 95.7F);
        obj.display();
    }
}