#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    string s;
    set<char> myString;
    cin >> s;
    for(auto i=0;i<s.length();++i)
        myString.insert(s[i]);

    if((myString.size())%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
