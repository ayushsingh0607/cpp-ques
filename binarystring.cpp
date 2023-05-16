#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(brr[i] == 0){
                c++;
            }
        }
        if(c %2 ==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}