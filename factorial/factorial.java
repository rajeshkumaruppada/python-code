import java.io.*;
import java.util.*;
class factorial 
{
    public static void main(String[] args)
    {
        int fact=1,n,i;
        Scanner s=new Scanner(System.in);
        System.out.println("enter the number");
        n=s.nextInt();
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        System.out.println("the factorial of the number "+n+" is "+fact);
    }
}