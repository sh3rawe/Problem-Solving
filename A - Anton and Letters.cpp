#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    string str;
    getline(cin,str);
    set<char> s;
    for(int i=0;i<str.length();++i)
    {
        if(str[i]>=97 && str[i]<=122)
        s.insert(str[i]);
    }
    cout << s.size();
    return 0;
}
