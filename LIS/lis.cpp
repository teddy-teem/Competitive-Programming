#include <bits/stdc++.h>
#define INF INT_MAX
#define EMPTY -1

using namespace std;
vector<int> v;

void printV(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cn=0, tmp = v[i];
        cout<<v[i]<<" ==>";
        for (int j = i + 1; j < n; j++)
        {
            // cout<<v[i]<<" > "<<v[j]<<" ->>>>>";
            if (v[j] > tmp)
            {
                cn++;
                tmp=v[j];
                cout << v[j] << "==== ";
            }
        }
        if(cn>ans) ans=cn;
        cout << endl;
    }
    cout<<ans;
    return 0;
}