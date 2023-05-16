#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>>x;
        cin>>y;
        int cp=x-y;
        int newsp = x+(0.1*x);
        int p= newsp - cp;
        cout<<p<<endl;
    }

	return 0;
}
