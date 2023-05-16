#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int sum = x+y+z;
        if(sum<5){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

	return 0;
}
