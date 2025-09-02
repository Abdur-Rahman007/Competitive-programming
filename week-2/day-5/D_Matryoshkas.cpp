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

        multiset<long long int> mt;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mt.insert(x);
        }
        
        int ans = 0;

        while(!mt.empty())
        {
            long long int x = *mt.begin();
            while (mt.find(x) != mt.end())
            {
                mt.erase(mt.find(x));
                x++;
            }
            ans++;
        }
        
        cout << ans <<'\n';
    }
    


    return 0;
}
