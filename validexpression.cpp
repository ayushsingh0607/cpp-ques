#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        string ans;
        cin >> n >> x;
        if (x > (n + 1) || x < (1 - n))
        {
            cout << -1 << endl;
        }
        else
        {
            if ((n % 2 == 0 and x % 2 == 0) or (n % 2 != 0 and x % 2 != 0))
            {
                ans += "*";
                n--;
            }

            for (int i = 0; i < n; i++)
            {

                if (x > 0)
                {
                    x--;
                    ans += '+';
                }
                else
                {
                    ans += '-';
                    x++;
                }
            }
            cout<<ans<<endl;
    }
}
}