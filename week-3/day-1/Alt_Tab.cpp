#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<string> v(n), ans; 

    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    map<string, int> mp;
    for (int i=n-1; i>=0; i--)
    {
        mp[v[i]]++;
        if(mp[v[i]]==1)
            ans.push_back(v[i]);
            
    }
    
    for (auto a: ans)
    {
        cout << a[a.size()-2] << a[a.size()-1];
    }
    


    return 0;
}