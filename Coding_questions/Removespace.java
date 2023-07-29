//remove space from string 20/07
import java.io.*;
import java.util.*;
class Removespace
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String s1;
        String r="";
        s1=sc.nextLine();
        for(int i=0;i<s1.length();i++)
        {
            char c=s1.charAt(i);
            if(c!=' ')
            {
            r=r+c;
            }
        }
        System.out.println(r);
    }
}