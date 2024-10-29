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
        long long int n, sum = 0, k=0;
        cin >> n;

        int arr[n];
        for (int i = 0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        
        int i=0, j=n-1;
        while (i<=j)
        {
            if (sum%2==0)
            {
                break;
            }
            else{
                if(arr[i]%2 !=0)
                {
                    sum -= arr[i];
                    i++;
                }
                else{
                    sum -= arr[j];
                    j--;
                }
            }
        }
        
        
        cout << j-i+1 <<'\n';
    }
    


    return 0;
}