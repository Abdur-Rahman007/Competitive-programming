#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, pos = 1;
    cin >> t;

    vector<int> ans;
    set<pair<int, int>> st;
    multiset<pair<int, int>> ml;

    while (t--)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            int m;
            cin >> m;
            st.insert({pos, m});
            ml.insert({m, -pos});
            pos++;
        }
        else if (x==2)
        {
            int a = st.begin()->first, b = st.begin()->second;
            ans.push_back(a);
            ml.erase({b, -a});
            st.erase(st.begin());
        }
        else{
            int a = ml.rbegin()->first, b = -ml.rbegin()->second;
            ans.push_back(b);
            st.erase({b, a});
            ml.erase(--ml.end());
        }
        
    }
    
    for(int a : ans)
    {
        cout << a <<" ";
    }


    return 0;
}