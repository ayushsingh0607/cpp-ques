#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int c = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
        {
            c++;
            if (c == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            c = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}
