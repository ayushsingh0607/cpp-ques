#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A, B;
        cin >> A >> B;
        int sum=0;
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                sum += B;
            }else{
                sum += A;
            }
        }
        cout<<sum<<endl;
        
    }
}
