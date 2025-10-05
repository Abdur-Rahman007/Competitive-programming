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
        int n, flag=0;
        cin >> n;

        int arr[n][n-1];
        for(int i=0; i<n; i++)
        {
            for (int j=0; j<n-1; j++)
            {
                cin >> arr[i][j];
            }
        }

        map<int, int> mp;
        vector<int> v;
        for (int i=0; i<n; i++)
        {
            mp[arr[i][0]]++;
            if(mp[arr[i][0]]==n-1)
            {
                v.push_back(arr[i][0]);
                flag = arr[i][0];
            }
        }

        for (int i= 0; i<n; i++)
        {
            if(arr[i][0]!= flag)
            {
                flag = i;
                break;
            }
        }
        
        for (int i=0; i<n-1; i++)
        {
            v.push_back(arr[flag][i]);
        }

        for (int i=0; i<n; i++)
        {
            cout << v[i] <<" ";
        }
        
        cout <<'\n';
    }
    


    return 0;
}
