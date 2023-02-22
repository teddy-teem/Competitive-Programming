#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define PB push_back
#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define I_REP(i, a, b) for (int i = a; i >= b; i--)
#define ISEVEN(a) (a & 1 ? 0 : 1)
// #define RS(a,n) ((a>>n)&1) //Right bit Shift
// #define LS(a,n) ((a<<n)&1) //Left bit shift
#define BIT_NO_OF_1(a) (__builtin_popcount(a)) // Number of one's in Binary
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vec2d;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

vec2d v = {
    {1, 2, 3}, 
    {4, 8, 2}, 
    {1, 5, 3}
};
int cost[100][100];

int letsRun(int i, int j)
{
    cout<<i<<" "<<j<<endl;
    if (i < 0 || j < 0)
        return 0;
    if(i==0 && j==0) return cost[i][j];
    return cost[i][j] + max(v[i][j], letsRun(i - 1, j - 1));
}
int main()
{
    IOS;
    cout<<letsRun(2, 2);
    REP(i, 0, 2){
        REP(j, 0, 2){
            cout<<cost[i][j];
        }
    }
    return 0;
}

// There are n stairs, a person standing at the bottom wants to reach the top. The person can climb
//  either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top.

// Similar result when calculate for fibonacci(n)..
//          __|
//       __|
//    __|
// __|