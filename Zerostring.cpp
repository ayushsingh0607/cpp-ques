#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c =0;
        int c1 =0;
        for(int i = 0; i<n;i++){
            if(s[i] == '1'){
                c++;
            }else{
                c1++;
            }
        }
        if(c1<c){
            cout<<c1+1<<endl;
        }else{
            cout<<c<<endl;
        }
        
    }
}