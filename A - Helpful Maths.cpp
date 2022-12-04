#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    //fio;
    string s;
    cin >> s;
    vector<char> vec;
    for(int i=0;i<s.size();++i)
    {
        if(s[i] != '+')
            vec.push_back(s[i]);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout << vec[i];
        if(i != vec.size()-1)
            cout << "+";
    }
    return 0;
}
