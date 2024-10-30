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
            if (s[i]=='a'&&s[i+1]=='b')
            {
                f++;
            }
            if (s[i]=='b'&&s[i+1]=='a')
            {
                g++;
            }
        }
        if (f==g && f>0)
        {
            cout << (f+g)*2 <<endl;
        }
        else{
            int a=0, b=0;
            for (int i=0; i<n; i++)
            {
                if (s[i]=='a')
                {
                    a++;
                }
                else{
                    b++;
                }
            }
            
            cout << max(a,b) <<endl;
        }
    }
    
    

    return 0;
}