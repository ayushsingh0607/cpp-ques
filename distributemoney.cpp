#include <bits/stdc++.h>
using namespace std;

void fact(int ans,int n){
    if(n==0){
        cout<<ans;
        return;
    }
    fact(ans*n,n-1);
}

int main(){
    int n;
    cin>>n;
    fact(1,n);
}