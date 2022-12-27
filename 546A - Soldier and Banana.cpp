// PROBLEM LINK :- https://codeforces.com/problemset/problem/546/A


#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    ll k , n , w , sum=0;
    cin >> k >> n >> w;
    for(int i=1;i<=w;++i)
    {
        sum += i*k;
    }
    if(sum > n)
        cout << sum - n;
    else
        cout << "0";
    return 0;
}
