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

        vector<int> v;
        priority_queue<int> q;
        for (int i=1; i<=n; i++)
        {
            q.push(i);
        }
        for (int i=1; i<n; i++)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            v.push_back(a);
            v.push_back(b);
            q.push((a+b+1)/2);
        }
        
        cout << q.top() <<'\n';

        int cnt = 1;
        for (int a: v)
        {
            if(cnt < 3)
            {
                cout << a <<" ";
                cnt++;
            }
            if (cnt == 3)
            {
                cout << '\n';
                cnt = 1;
            }
        }
        
    }
    

    return 0;

}
