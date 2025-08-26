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
        for (int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        
        priority_queue<int> pq;
        for (auto x: mp)
        {
            pq.push(x.second);
        }
        
        while (!pq.empty())
        {
            if(pq.size()<2)
                break;
            int a = pq.top();
            pq.pop();
            a--;
            int b = pq.top();
            pq.pop();
            b--;

            if(a>0)
                pq.push(a);
            if(b>0)
                pq.push(b);
        }

        int ans = 0;
        if(!pq.empty())
            ans += pq.top();
        
        cout << ans <<'\n';
        
    }
    
    return 0;
}