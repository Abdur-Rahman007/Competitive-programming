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
        int n, m;
        cin >> n >> m;

        int arr[n][m];

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }
        
        int ans = 0;
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                int sum = arr[i][j];
                int p = i+1;
                int q = j+1;
                while (p<n && q<m)
                {
                    sum += arr[p][q];
                    p++;
                    q++;
                }
                p = i-1;
                q = j-1;
                while (p>=0 && q>=0)
                {
                    sum += arr[p][q];
                    p--;
                    q--;
                }
                p = i+1;
                q = j-1;
                while (p<n && q>=0)
                {
                    sum += arr[p][q];
                    p++;
                    q--;
                }
                p = i-1;
                q = j+1;
                while (p>=0 && q<m)
                {
                    sum += arr[p][q];
                    p--;
                    q++;
                }
                
                ans = max(ans, sum);
            }
            
        }
        
        
        cout << ans <<'\n';
    }


    return 0;
}
