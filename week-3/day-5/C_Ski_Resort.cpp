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
        long long int n, k, q, len = 0, ans = 0;
        cin >> n >> k >> q;

        vector<long long> arr(n);
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        
        for (int i=0; i<n; i++)
        {
            if (arr[i]<=q)
                len++;
            else
            {
                if (len >= k)
                {
                    long long int m = (len - k+1);
                    ans += (m*(m+1))/2;
                }
                len = 0;
            }      
        }
        if (len >= k)
        {
            long long int m = (len - k+1);
            ans += (m*(m+1))/2;
        }
        cout << ans <<endl;

    }

    return 0;
}