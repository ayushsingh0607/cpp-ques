#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,y;
	    cin>>n>>y;
	    int ar[n];
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	    }
	    int res = ar[0];
	    for(int i = 1;i<n;i++){
	        res = res | ar[i];
	    }
	    int f = -1;
	    for(int i = 0;i<=y;i++){
	        if((res|i) == y){
	            f = i;
	            break;
	        }
	    }
	    if(f==-1) cout<<-1<<endl;
	    else cout<<f<<endl;
	}
	return 0;
}