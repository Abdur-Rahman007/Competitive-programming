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
        string s;
        cin >> s;
        for (int i=0; i<n-1; i++)
        {
            if (s[i]=='a'&& s[i+1]=='b')
            {
                f++;
            }
            if (s[i]=='b'&& s[i+1]=='a')
            {
                g++;
            }
        }
        if (f==g)
        {
            cout << n <<endl;
        }
        else{
            int a=n, b=n;
            for (int i=0; i<n; i++)
            {
                if (s[i]!=s[0])
                {
                    break;
                }
                a--;
            }
            for (int i=n-1; i>=0; i--)
            {
                if (s[i]!=s[n-1])
                {
                    break;
                }
                b--;
            }
            
            cout << max(a,b) <<'\n';
        }
    }
    
    

    return 0;
}
