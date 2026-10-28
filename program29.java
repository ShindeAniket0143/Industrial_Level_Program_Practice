import java.util.Scanner;

class program29 
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;               

        System.out.println("Enter your name : ");
        sName = scanner.nextLine();

        System.out.println("Enter your age : ");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks : ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your age is : "+iAge);
        System.out.println("Your Marks is : "+fMarks);
    }
}
