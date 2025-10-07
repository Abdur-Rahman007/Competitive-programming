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
        vector<long long> v;

        long long int sum = 0, op = 0;
        for (int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            if(x != 0)
                v.push_back(x);
            sum += abs(x);
        }
        
        for (int i=0; i<v.size(); i++)
        {
            if(v[i]<0)
            {
                op++;
                while (i<v.size() && v[i+1]<0 && v[i]<0)
                    i++;
            }
        }
        
        cout << sum << " " << op <<'\n';
    }
    


    return 0;
}