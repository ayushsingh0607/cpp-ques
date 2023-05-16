#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++ ){
            cin>>brr[i];
        }
        int max=0;
        for(int i=0 ; i<n;i++){
        if(arr[i] > arr[max]){
            max=i;
        }
        else if(arr[i] == arr[max]){
            if(brr[i] > brr[max]){
                max=i;
            }
        }
        }
        cout<<max+1<<endl;

    }
}