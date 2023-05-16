#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
        int c=0;
	    while(x>0){
	    if((x%10) == 7){
            c++;
            break;
	    }
	    x/=10;
	    }
        if(c == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

	}
	return 0;
}
