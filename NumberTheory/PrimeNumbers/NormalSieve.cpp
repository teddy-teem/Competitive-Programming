#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS  ios_base::sync_with_stdio(false);  cin.tie(NULL)
#define PB push_back
#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define I_REP(i, a, b) for (int i = a; i >= b; i--)
#define ISEVEN(a) (a & 1 ? 0 : 1)
//#define RS(a, n) ((a >> n) & 1)            // Right bit Shift
//#define LS(a, n) ((a << n) & 1)            // Left bit shift
#define NO_OF_1(a) (__builtin_popcount(a)) // Number of one's in Binary
#define NO_OF_LEADING_0(a) (__builtin_clz(a))
#define NO_OF_TRAILING_0(a) (__builtin_ctz(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

vi sieve(int a)
{
    vi ans;
    vector<bool> check(a);
    ans.PB(2);
    for (int i = 3; i * i <= a; i += 2)
    {
        if (check[i] == 0)
        {
            for (int j = i * i; j <= a; j += i * 2)
            {
                check[j] = 1;
            }
        }
    }
    for (int i = 3; i <= a; i += 2)
    {
        if (check[i] == 0)
            ans.PB(i);
    }
    return ans;
}

int main()
{
   IOS;
    vi prime = sieve(1000);
    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << " ";
    }
    return 0;
}