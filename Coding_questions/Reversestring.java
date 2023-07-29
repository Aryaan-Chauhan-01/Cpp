import java.io.*;
import java.util.*;
class Reversestring
{
 public static void main(String args[])
{
 Scanner sc=new Scanner(System.in);
String s;
String r="";
s=sc.nextLine();
for(int i=0;i<s.length();i++)
{
char ch=s.charAt(i);
r=ch+r;
}
System.out.println(r);
}
}