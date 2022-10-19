#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int n, counter=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;++i)
    {
        if(s[i]==s[i+1])
            counter++;
    }
    cout << counter;
    return 0;
}
