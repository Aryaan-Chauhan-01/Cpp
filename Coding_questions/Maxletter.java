//find the highest occuring letter in a string if all are equal then -1,20/07
import java.io.*;
import java.util.*;
class Maxletter
{
    static char func(String s)
    {
        HashMap<Character, Integer> m=new HashMap<Character,Integer>();
        int n=s.length();
        char ans=0;
        int cnt=0;
        int f=3;
        for(int i=0;i<n;i++)
        {
            char c=s.charAt(i);
            m.put(c,m.getOrDefault(c,0)+1);
            if(cnt<m.get(c))
            {
                ans=c;
                cnt=m.get(c);
                f=1;
            }
            else if(cnt==m.get(c))
             f=0;
            else
             f=f;
        }
        if(f==1)
        {
        return ans;
        }
        
            return '-';
        
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        char ch=func(s);
        if(ch=='-')
         System.out.println("-1");
        else
         System.out.print(ch);
    }
}