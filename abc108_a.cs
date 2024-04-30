abc108_a.cs
##############################################
##############################################
##############################################
##############################################
public class Program{
  public static void Main(string[] args){
    int N = int.Parse(System.Console.ReadLine());
    int even = N/2, odd = (N+1)/2;
    int ans = even*odd;
    System.Console.WriteLine(ans);
  }
}
##############################################
using C = System.Console;
class Problem
{
    static void Main(string[] args)
    {
        int n = int.Parse(C.ReadLine());
        C.WriteLine((n/2)*(n-n/2));
    }
}
##############################################
using System;
class Program
{
    static void Main()
    {
        int N = int.Parse(Console.ReadLine());   
        int ANS = (N / 2) * ((N + 1) / 2);       
        Console.WriteLine(ANS);
    }
}
##############################################
[python]
N=int(input())
print((N//2)*((N+1)//2))
##############################################
