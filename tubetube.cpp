#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int t;
        cin>>t;
        int maxi=0;
        int a=0;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int e[n];
        for(int j=0;j<n;j++){
            cin>>e[j];
        }
        int c[n];
        for(int k=0;k<n;k++){
            c[k] =t;
            t--;
        } 
        for(int i=0;i<n;i++){
             if(c[i]>=d[i]){
                if(maxi<e[i]){
                    maxi=e[i];
                    a=d[i];
                }
             }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(e[i]==maxi && a == d[i]){
                ans=i+1;
                break;
            }

        }
        if(ans == 0){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }

    }
}