#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int a1, a2, a3, a4, calories=0;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='1')
            calories+=a1;
        else if(s[i]=='2')
            calories+=a2;
        else if(s[i]=='3')
            calories+=a3;
        else if(s[i]=='4')
            calories+=a4;
    }
    cout << calories;
    return 0;
}
