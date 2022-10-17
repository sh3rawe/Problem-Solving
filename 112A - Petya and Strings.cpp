#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1<s2)
        cout << "-1";
    else if(s2<s1)
        cout << "1";
    else
        cout << "0";
    return 0;
}
