// PROBLEM LINK : https://codeforces.com/problemset/problem/118/A


#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define loop(n) for(int i=0;i<n;i++)

int main()
{
    fio;
    string str , str1;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::tolower);

    for(auto i=0;i<str.size();++i)
    {
        if(str[i]!='a' && str[i]!='o' && str[i]!='y' && str[i]!='e' && str[i]!='u' && str[i]!='i')
        {
            str1.push_back('.');
            str1.push_back(str[i]);
        }
    }
    cout << str1;
    return 0;
}
