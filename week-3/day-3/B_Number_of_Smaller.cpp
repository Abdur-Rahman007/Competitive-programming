#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), ans(m);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    int j = 0;
    for (int  i=0; i<m; i++)
    {
        while (a[j]<b[i] && (j<n))
        {
            j++;
        }
        ans[i] = j;
    }

    for (int i=0; i<m; i++)
    {
        cout << ans[i] << " ";
    }
    
    
    return 0;
}
