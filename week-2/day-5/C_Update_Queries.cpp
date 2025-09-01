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
        int n, m;
        cin >> n >> m;

        string s, c;
        cin >> s;

        set<int> st;
        for (int i=0; i<m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        
        cin >> c;
        
        sort(c.begin(), c.end());

        int i=0;
        for (int x: st)
        {
            s[x-1] = c[i];
            i++;
        }

        cout << s <<'\n';
    }
    


    return 0;
}