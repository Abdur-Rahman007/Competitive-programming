#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t;
    cin >> n >> t;

    vector<long long int> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        
        if(a==1)
        {
            v[b] = c;
        }
        else{
            long long int ans = 0;
            for (int i=b; i<c; i++)
            {
                ans += v[i];
            }
            cout << ans <<'\n';
        }
        
    }
    


    return 0;
}
