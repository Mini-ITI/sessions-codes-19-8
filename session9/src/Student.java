public class Student extends Person{
    private double gpa;
    private int grade;

    public double getGpa() {
        return gpa;
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }

    public int getGrade() {
        return grade;
    }

    public void setGrade(int grade) {
        this.grade = grade;
    }

    @Override
    public void work(){
        System.out.println("i'm studying");
    }


    public Student(String name, int age, double gpa, int grade) {
        super(name, age);
        this.gpa = gpa;
        this.grade = grade;
    }
}
