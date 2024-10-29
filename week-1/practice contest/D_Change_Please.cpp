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
        int x;
        cin >> x;

        int ans = (100-x)/10;
        ans = ans*10;
        
        cout << ans <<'\n';
    }
    


    return 0;
}