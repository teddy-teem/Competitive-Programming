# Competitive-Programming
## Table of contents
1.  [Dynamic Programming](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md)
      * [Basic Problems](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#basic-problems)
          - [Minimum Steps One](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#minimum-steps-to-one)
      * [0/1 Knapsack](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#01-knapsack)
          - [Coin Change](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#coin-change)
      * [Fibonacchi](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#fibonacchi)
          - [Top Down](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#top-down)
          - [Bottom Up](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#bottom-up)
      * [LCS](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#lcs-longest-common-subsequence)
      * [LIC](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#lis-longest-increasing-subsequence)
      * [Shortest path](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#shortest-path-in-dag)
      * [nCr](https://github.com/teddy-teem/Competitive-Programming/blob/master/DP/DPReadMe.md#ncr)
      
      
      
2. [Mathematics](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md)
     - [Addition](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#large-number-addition)
     - [Basic Math](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#basic)
          + [Number of digit in a number](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#number-of-digit-in-a-number)
     - [Division](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#large-number-division)
     - [Factorial](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#factorial)
          + [Factorial](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#factorial-1)
          + [Number of digit in n!](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#number-of-digit-in-n-number)
          + [Factorize of Factorial](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#factorize-of-factorial)
     - [Multiplication](https://github.com/teddy-teem/Competitive-Programming/blob/master/Mathmetics/Math.md#large-number-multiplication)
     - Permutation
     - Subset
     - Subtraction
     
3. [Number Theory](https://github.com/teddy-teem/Competitive-Programming/blob/master/NumberTheory/NumberTheory.md)
     - Euclidean
     - GCD
     - Mod
     - Prime Factorization
     - Prime Numbers
4. Recusrsive
     - Random Problem 1
     - Random Problem 2
5. Graph
     - BFS
     - DFS
     - Topological Sort
     
<details><summary>Basic Tamplate</summary>
<p>

#### We can hide anything, even code!

```c++
#include<bits/stdc++.h>
#define F_READ   freopen("input.txt", "r", stdin);
#define F_WRITE   freopen("output.txt", "w", stdout);
#define IOS   ios_base::sync_with_stdio(false); cin.tie(NULL)
#define PB   push_back
#define F   first
#define S   second
#define REP(i,a,b)   for(int i=a; i<=b; i++)
#define I_REP(i,a,b)   for(int i=a; i>=b; i--)
#define ISEVEN(a) (a&1?0:1)
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v,s) for(int i=0; i<s.size(); i++) v.PB(s[i]-'0');
#define INT_TO_STRING(a,x) for(int i=0; i<x.size(); i++) a+=x[i]+'0';

using namespace std; 

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
typedef pair<string,int> psi;
typedef map<int,int> mii;

int main() {
  IOS;
  cout<<"Hello World";
  return 0;
}
```

</p>
</details>
