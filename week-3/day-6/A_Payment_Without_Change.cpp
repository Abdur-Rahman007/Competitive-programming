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
        long long int a, b, n, s;
        cin >> a >> b >> n >> s;

        long long int total = (a*n) + b;
        if(total < s)
        {
            cout << "NO\n";
            continue;
        }
        
        long long int x = s%n;
        if(x>b)
            cout <<"NO\n";
        else
            cout << "YES\n";
    }
    


    return 0;
}
