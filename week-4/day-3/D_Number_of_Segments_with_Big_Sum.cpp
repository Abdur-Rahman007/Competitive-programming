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
    
    long long int sum = 0, ans = 0;
    int l = 0, r = 0;

    while (r<n)
    {
        sum += v[r];
        if(sum>=s)
        {
            ans += n - r; 
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
    
    cout << ans;


    return 0;
}
