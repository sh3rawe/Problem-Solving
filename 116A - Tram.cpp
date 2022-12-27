// PROBLEM LINK :- https://codeforces.com/problemset/problem/116/A


#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    int n,no_pass=0;
    cin >> n;
    int capacity[n];
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin >> a >> b;
        no_pass -= a;
        no_pass += b;
        capacity[i] = no_pass;
    }
    sort(capacity,capacity+n);
    cout << capacity[n-1];
    return 0;
}
