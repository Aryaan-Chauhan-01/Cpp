//20-07
import java.io.*;
import java.util.*;
class Maimumslternate
{
    public static int rob(int[] nums)
    {
        final int n=nums.length;
        if(n==0)
         return 0;
        if(n==1)
         return nums[0];
        int[] dp=new int[n];
        dp[0]=nums[0];
        dp[1]=Math.max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
         dp[i]=Math.max(dp[i-1],dp[i-2]+nums[i]);
        return dp[n-1];
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        
        int n;//number of houses;
        n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++)
         {
            a[i]=sc.nextInt();
         }
         int r=rob(a);
         System.out.println(r);
    }
}