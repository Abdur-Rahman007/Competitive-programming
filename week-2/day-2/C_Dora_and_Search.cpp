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
        int n;
        cin >> n;
        
        deque<int> d;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            d.push_back(a);
        }

        int l = 0, r = n-1, mx = n, mn = 1;

        while (!d.empty())
        {
            if(d.front()==mx)
            {
                d.pop_front();
                mx--;
                l++;
            }
            else if(d.front() == mn)
            {
                d.pop_front();
                mn++;
                l++;
            }
            else if(d.back()==mx)
            {
                d.pop_back();
                mx--;
                r--;
            }
            else if(d.back()==mn)
            {
                d.pop_back();
                mn++;
                r--;
            }
            else
                break;
        }
        
        if(l<r)
            cout << l+1 << " " << r+1 <<'\n';
        else
            cout << "-1\n";
        
    }


    return 0;
}