#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n, s;
    cin >> n >> s;

    vector<long long int> v(n);

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    long long int sum = 0;
    int l = 0, r = 0, ans = INT_MAX;

    while (r<n)
    {
        sum += v[r];
        if(sum>=s)
        {
            ans = min(ans, r-l+1);
            sum -= v[l];
            l++;
            while (sum<s && r<n)
            {
                r++;
                sum += v[r];
            }

            sum -= v[r];
        }
        else
            r++;
    }
    
    if(ans == INT_MAX)
        cout << -1;
    else
        cout << ans;

    return 0;
}
