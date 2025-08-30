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
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> v(m);
        for(int i=0; i<m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i=0; i<q; i++)
        {
            int x, ans = INT_MAX;
            cin >> x;
 
            auto it = upper_bound(v.begin(), v.end(), x);
            if(it==v.begin())
            {
                cout << v.front()-1 <<'\n';
            }
            else if (it==v.end())
            {
                cout << n-v.back() <<'\n';
            }
            else{
                cout << ((*it - *(it-1))/2) <<'\n';
            }

        }
        
        
    }
    

    return 0;
}