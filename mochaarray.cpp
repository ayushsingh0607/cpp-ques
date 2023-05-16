#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ans;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int f = 0;
        for(int i = 1;i<n;i++){
            int gcd = arr[0];    
            for(int j= 0;j<=i;j++){
                gcd = __gcd(gcd,arr[j]);
            }
            if(gcd>i+1){
                f = -1;
                break;
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])==1){
                    f = 1;
                    break;
                }
            }
        }
        if(f == 1 || f == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
}
}
}
