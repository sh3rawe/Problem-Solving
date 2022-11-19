#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long


int main()
{
    fio;
    int tc;
    cin >> tc;
    while(tc--)
    {
        string str;
        cin >> str;
        if(str.length() > 10)
        {
            cout << str[0] << str.length()-2 << str[str.length()-1] << endl;
        }
        else
            cout << str << endl;
    }
    return 0;
}
