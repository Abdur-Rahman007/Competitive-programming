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
        long long int n, ans=0;
        cin >> n;

        priority_queue<long long int> q;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x!=0)
                q.push(x);
            else if(x==0 && !q.empty())
            {
                ans += q.top();
                q.pop();
            }
        }
        
        cout << ans <<'\n';
        
        
    }

    return 0;
}