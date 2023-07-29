//largetst and smallest digit in the numberr 20/07
import java.io.*;
import java.util.*;
class Lasdigit
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,l=0,s=9,r;
        n=sc.nextInt();
        while(n>0)
        {
            r=n%10;
            if(r>l)//l=Math.max(r,l)
             l=r;
            if(r<s)//s=Math.min(r,s)
             s=r;
            n=n/10;
        }
        System.out.println("\nSmallest : "+s+" Largest : "+l);

    }
}