// Approach 3

import java.util.Scanner;

class program39
{    
    public static void main(String A[])
    {
        Scanner scanner = null;
        Arithematic arithematic = null;
        int ivalue1= 0, ivalue2 = 0, iResult = 0;
        scanner = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        ivalue1 = scanner.nextInt();

        System.out.println("Enter Second Number : ");
        ivalue2 = scanner.nextInt();

        arithematic = new Arithematic();
        iResult = arithematic.Addition(ivalue1, ivalue2);        

        System.out.println("Addition is : "+iResult);
    }
}

class Arithematic
{
    public int Addition(int iNo1, int ino2)
    {
        int iAns = 0;
        iAns = iNo1 + ino2;
        return iAns;
    }
} 
