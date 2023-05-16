#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[i]*arr[j] == i+j+2){
                    c++;
                }
            }
        }
        cout<<c<<endl;

    }
}
