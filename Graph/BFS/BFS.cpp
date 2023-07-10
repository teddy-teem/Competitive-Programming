#include <bits/stdc++.h>
#define F_READ freopen("input.txt", "r", stdin);
#define F_WRITE freopen("output.txt", "w", stdout);
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ISEVEN(a) (a & 1 ? 0 : 1)
#define BIT_NO_OF_1(a) (__builtin_popcount(a))
#define BIT_NO_OF_LEADING_0(a) (__builtin_clz(a))
#define BIT_NO_OF_TRAILING_0(a) (__builtin_ctz(a))
#define STRING_TO_INT(v, s)            \
    for (int i = 0; i < s.size(); i++) \
        v.PB(s[i] - '0');
#define INT_TO_STRING(a, x)            \
    for (int i = 0; i < x.size(); i++) \
        a += x[i] + '0';

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef pair<string, int> psi;
typedef map<int, int> mii;

int visited[1000];

void bfs(int root, vector<vi>& v)
{
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int front = q.front();
        cout<<front<<"<- ";
        visited[front]=true;
        q.pop();
        for(int i=0; i<v[front].size(); i++) {
            if(visited[v[front][i]]==false) {
                q.push(v[front][i]);
            }
        }
    }
}

int main()
{
    IOS;
    int node, edge;
    cin>>node>>edge;
    vector<vi> v(node+1);
    for(int i=0; i<edge; i++) {
        int a, b;
        cin>>a>>b;
        // cout<<a<<" "<<b<<endl;
        v[a].push_back(b);
    }
    bfs(1, v);
    return 0;
}