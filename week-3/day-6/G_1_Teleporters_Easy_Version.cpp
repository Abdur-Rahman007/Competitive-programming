#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, c;
        cin >> n >> c;

        vector<long long int> v(n+1);
        for (int i=1; i<=n; i++)
        {
            cin >> v[i];
            v[i] += i; 
        }
        
        sort(v.begin(), v.end());

        long long int ans = 0;

        for (int i=1; i<=n; i++)
        {
            if(c>=v[i])
            {
                c -= v[i];
                ans++;
            }
            else
                break;
        }
        
        cout << ans <<'\n';
        
    }
    


    return 0;
}
