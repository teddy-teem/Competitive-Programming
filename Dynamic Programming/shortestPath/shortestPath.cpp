#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
int w[100][100];
int mem[10000];
int n, c=0;
int solve(int u) {
    if (u==n-1) return 0;
    if(mem[u]!=-1) return mem[u];
    int ans=INF;
    for(int i=0; i<n; i++) {
         if (w[u][i] != INF) {
              ans = min(ans, solve(i)+w[u][i]);
         }
    }
    mem[u]=ans;
    return mem[u];
}
int main()
{
    for(int i=0; i<10000; i++) {
        mem[i]=-1;
    }
    for(int i=0; i<100; i++)
        for(int j=0; j<100; j++)
            w[i][j]=INF;
    int e;
    cin >>e>>n;
    while (e--)
    {
        int u,v,weight;
        cin>>u>>v>>weight;
        w[u][v]=weight;
    }
    int a = solve(0);
    cout<<a;
}