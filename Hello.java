import java.util.Scanner;

class Hello {
    public static void main(String args[]) {
        System.out.print("Enter any number : ");
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        System.out.println("The square of the number is : " + x * x);
        scan.close();
    }
}
