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

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        string s;
        cin >> s;

        map<int, int> mp, mm;
        for (int i=0; i<n; i++)
        {
            if(s[i]=='1')
                mp[v[i]] = 0;
            else
                mm[v[i]] = 1;
        }
        
        int i = n - mp.size() + 1, j = 1;
        for(auto x: mp)
        {
            mp[x.first] = i;
            i++;
        }
        for (auto y: mm)
        {
            mm[y.first] = j;
            j++;
        }
        
        for (int i=0; i<n; i++)
        {
            if(mp[v[i]]!=0)
                cout << mp[v[i]] << " ";
            else
                cout << mm[v[i]] << " ";
        }
        
        cout <<'\n';
    }

    return 0;
}