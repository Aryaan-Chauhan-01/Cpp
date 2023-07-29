// two strings are anagram if they have same spelling 20/07
import java.io.*;
import java.util.*;
class Anagram{
    public static void main(String  args[])
    {
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        String s2=sc.nextLine();
        char[] c1=new char[s1.length()];
        char[] c2=new char[s2.length()];
        for(int i=0;i<s1.length();i++)
        {
            c1[i]=s1.charAt(i);
        }
        for(int i=0;i<s2.length();i++)
        {
            c2[i]=s2.charAt(i);
        }
        Arrays.sort(c1);
        Arrays.sort(c2);
        /*
        for(int i=0;i<s1.length();i++)
        {
            System.out.print(c1[i]);
        }*/
        if(Arrays.equals(c1,c2))
         System.out.println("Anagram");
        else
         System.out.print("Not an Anagram");
    }
}