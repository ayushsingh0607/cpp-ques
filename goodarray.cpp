#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i =0;i<n;i++){
            cin>>ar[i]; 
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            if((ar[i]%2 == 0 && ar[i+1]%2 == 0) || (ar[i]%2 !=0 && ar[i+1] !=0)){
                c++;
            }

        }
        cout<<c<<endl;

    }
}