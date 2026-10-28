// Approach 2

import java.util.Scanner;

class program35

{

    public static int Addition(int iNo1, int ino2)
    {
        int iAns = 0;
        iAns = iNo1 + ino2;
        return iAns;
    }
    
    public static void main(String A[])
    {
        Scanner scanner = null;
        int ivalue1= 0, ivalue2 = 0, iResult = 0;
        scanner = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        ivalue1 = scanner.nextInt();

        System.out.println("Enter Second Number : ");
        ivalue2 = scanner.nextInt();

        iResult = Addition(ivalue1, ivalue2);        

        System.out.println("Addition is : "+iResult);

    }
}
