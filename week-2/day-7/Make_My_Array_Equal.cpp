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

        map<int, int> mp;
        
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            if(a!=0)
                mp[a]++;
        }
        if(mp.size()==1 || mp.size()==0)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    


    return 0;
}
