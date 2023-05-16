#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sell;
        if(x>=y){
            sell = y;
        }else if(x<y){
            sell = (x*1)+((y-x)*2);
        }
        cout<<sell<<endl;
    }
}