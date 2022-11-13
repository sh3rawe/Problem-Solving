#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    cout << 4 - s.size();
    return 0;
}
