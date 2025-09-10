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
        int n;
        cin >> n;

        string s;
        cin >> s;
        long long int cnt = 0;
        vector<long long int>  v, ans(n+1);
        for (int i=0; i<n; i++)
        {
            int L = i, R = n-i-1;

            if(s[i]=='L')
            {
                if(R>L)
                {
                    cnt += R;
                    v.push_back(R-L);
                }
                else
                    cnt += L;
            }
            else{
                if(L>R)
                {
                    cnt += L;
                    v.push_back(L-R);
                }
                else
                    cnt += R;
            }
        }

        sort(v.begin(), v.end(), greater<long long int>());
        
        
        for (int i=v.size(); i<=n; i++)
        {
            ans[i] = cnt;
        }

        for (int i=v.size()-1; i>=1; i--)
        {
            cnt -= v[i];
            ans[i] = cnt;
        }

        for (int i=1; i<=n; i++)
        {
            cout << ans[i] <<" ";
        }

        cout <<'\n';
    }
    


    return 0;
}
