#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n),b(n);
        long long kill=0;
        for (int i=0 ; i< n ; i++){
            int k;
            cin>>k;
            a.push_back(k);
            kill += a[i];
        }
        for (int i=0 ; i< n ; i++){
            int j;
            cin>>j;
            b.push_back(j);
            kill += b[i];
        }
        kill -= *max_element(b.begin() , b.end());
        cout<<kill<<endl;
    }
    
}