#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long a;
        long long b;
        long long ans;
        for(int i=0;i<n;i++){
            a=arr[0]*arr[1];
            b=arr[n-1]*arr[n-2];
            ans=max(a,b);
        }
        cout<<ans<<endl;
    }
}