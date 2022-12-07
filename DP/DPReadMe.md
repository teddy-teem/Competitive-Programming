# Dynamic Programming

 1. Basic Problems
      - **Minimum Steps to One**
      **Problem Statement:** Problem Statement: On a positive integer, you can perform any one of the following 3 steps. 
       1.) Subtract 1 from it. ( n = n - 1 ) ,  
       2.)   If its divisible by 2, divide by 2. ( if n % 2 == 0 , then n = n / 2 ) ,
       3.) If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3 ).
      Now the question is, given a positive integer n, find the minimum number of steps that takes n to 1 eg: 1.)For n = 1 , output: 0 2.) For n = 4 , output: 2 ( 4 /2 = 2 /2 = 1 ) 3.) For n = 7 , output: 3 ( 7 -1 = 6 /3 = 2 /2 = 1 )

      **solution:**
          **Wrong Aproach** - thinking Greedy solution
          It can be solved by dp.

          
          int solve() {
               if(n==0) return 0;
               if(mem[n]!=-1) return mem[n];
               int r = 1+solve(n-1);
               if(n%/2==0) r=min(r, 1+solve(n/2)); // if divisible by 2
               if(n%3==0) r = min(r, 1+solve(n/3)); // if divisible by 3;
               mem[n]=r;
               return r;
          }
          

 2. 0/1 Knapsack
      - [Coin Change]()
 3. Fibonacchi
       - [Top Down]()
       - [Bottom up]()
 4. [LCS (Longest Common Subsequence)]()
 5. [LIS (Longest Increasing Subsequence)]()
 6. [Shortest Path in DAG]()
