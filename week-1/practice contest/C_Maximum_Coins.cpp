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
        int n, x, sum=0;
        cin >> n >> x;
        while (x--)
        {
            sum += pow(2,n);
            n--;
        }
        for (int i=1; i<=n; i++)
        {
            sum -= pow(2,i);
        }
        
        cout << sum <<'\n';
    }
    


    return 0;
}