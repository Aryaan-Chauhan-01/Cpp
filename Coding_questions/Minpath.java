//20-07
import java.io.*;
import java.util.*;
class Minpath
{
public static int minpath(int[][] grid)
{
if(grid==null|| grid.length==0)
 return 0;
int m=grid.length;
int n=grid[0].length;
int[] dp=new int[m];
dp[0]=grid[0][0];
for(int i=1;i<m;i++)
{
dp[i]=dp[i-1]+grid[i][0];
}
for(int j=1;j<n;j++)
{
for(int i=0;i<m;i++)
{
if(i!=0 && j!=0)
{
dp[i]=grid[i][j]+Math.min(dp[i-1],dp[i]);
}
else
{
 dp[i]+=grid[i][j];
}
}
}
return dp[m-1];
}
public static void main(String args[])
{
 Scanner sc=new Scanner(System.in);
int r,c,min;
r=sc.nextInt();
c=sc.nextInt();
int[][] a=new int[r][c];
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
{
a[i][j]=sc.nextInt();
}
}
min=minpath(a);
System.out.println(min);
}
}