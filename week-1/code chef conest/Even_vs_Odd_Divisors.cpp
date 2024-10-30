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
        int n, f=0, g=0;
        cin >> n;
        for (int i=1; i<=n; i++)
        {
            if (n%i==0)
            {
                if (i%2==0)
                {
                    f++;
                }
                else{
                    g++;
                }
            }
        }
        if (f>g)
        {
            cout << 1 <<endl;
        }
        else if (f==g)
        {
            cout << 0 <<endl;
        }
        else{
            cout << -1 <<endl;
        }
    }
    
    

    return 0;
}