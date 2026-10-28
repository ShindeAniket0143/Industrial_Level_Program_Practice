// Approach 1

import java.util.Scanner;

class program33

{
    public static void main(String A[])
    {
        Scanner scanner = null;
        int ivalue1= 0, ivalue2 = 0, iResult = 0;
        scanner = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        ivalue1 = scanner.nextInt();

        System.out.println("Enter Second Number : ");
        ivalue2 = scanner.nextInt();

        iResult = ivalue1 + ivalue2;        // business Logic

        System.out.println("Addition is : "+iResult);

    }
}
