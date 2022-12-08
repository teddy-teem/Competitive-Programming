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
//#define RS(a,n) ((a>>n)&1) //Right bit Shift
//#define LS(a,n) ((a<<n)&1) //Left bit shift
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) //Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))

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

vector<int> mem(100005, -1);

int a, b, c, d, e, f;
int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(mem[n]!=-1) return mem[n];
    int ans = fn(n-1) % 10000007 + fn(n-2) % 10000007 + fn(n-3) % 10000007 + fn(n-4) % 10000007 + fn(n-5) % 10000007 + fn(n-6) % 10000007;
    // cout<<ans<<" <-"<<n<<endl;;
    mem[n]=ans % 10000007;
    return mem[n];
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        mem[0]=a;
        mem[1]=b;
        mem[2]=c;
        mem[3]=d;
        mem[4]=e;
        mem[5]=f;
        int a = fn(n);
        printf("Case %d: %d\n", caseno,  mem[n]%10000007);
        fill(mem.begin(), mem.end(), -1);
    }
    return 0;
}