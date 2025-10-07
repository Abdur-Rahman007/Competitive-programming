#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    map<long long, long long> a, b;
    for (int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        a[x]++;
    }
    for (int i=0; i<m; i++)
    {
        long long x;
        cin >> x;
        b[x]++;
    }

    long long ans = 0;
    for(auto f: a)
    {
        ans += (f.second * b[f.first]);
    }

    cout << ans;

    return 0;
}
