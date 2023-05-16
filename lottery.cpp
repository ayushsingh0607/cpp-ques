#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    for(int i;i<n;i++){
        if(a[i]==x){
            cout<<"The ticket number "<< x << "is found at position "<< i+1 << endl;
            cout<<"Congratulations!You have won the lottery"<<endl;
            return 0;
        } 
    }
            cout<<"Sorry the ticket number "<< x << " is not there . Better luck next time!"<<endl;
            return 0;
}