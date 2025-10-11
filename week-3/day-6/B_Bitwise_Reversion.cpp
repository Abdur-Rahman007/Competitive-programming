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
        long long int x, y, z;
        cin >> x >> y >> z;
        
        int a = (x&y);
        int b = (y&z);
        int c = (z&x);

        if(a==b && b==c && c==a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    


    return 0;
}
