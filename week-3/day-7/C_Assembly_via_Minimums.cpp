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

        int m = (n*(n-1))/2;

        vector<int> v(m);
        for (int i=0; i<m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        int ind = 0, k = n-1;
        for (int i=0; i<n-1; i++)
        {
            int mn = INT_MAX;
            for (int j=0; j<k; j++)
            {
                mn = min(v[ind], mn);
                ind++;
            }
            k--;
            cout << mn <<" ";
        }
        
        cout << v[m-1] <<" ";

        cout<<'\n';
        
    }
    


    return 0;
}
