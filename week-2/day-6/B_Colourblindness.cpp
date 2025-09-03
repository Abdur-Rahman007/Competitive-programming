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

        string a, b;
        cin >> a >> b;

        int i=0;

        int f = 0;
        while (i<n)
        {
            if(a[i]==b[i] || (a[i] == 'G' && b[i] == 'B') || (b[i] == 'G' && a[i] == 'B') )
                i++;
            else
            {
                f = 1;
                break;
            }
        }
        
        if(f)
            cout << "NO\n";
        else
            cout << "YES\n";
        
    }

    return 0;
}