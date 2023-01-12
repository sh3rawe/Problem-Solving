// PROBLEM LINK : https://codeforces.com/problemset/problem/313/A


#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
#define YES cout<<"YES"
#define NO cout<<"NO"
#define Yes cout<<"Yes"
#define No cout<<"No"
#define yes cout<<"yes"
#define no cout<<"no"

ll factorial(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    fio;
    ll n;
    cin >> n;
    if(n==-10)
    {
        cout << 0;
        return 0;
    }
    if(n>=0)
    {
        cout << n;
        return 0;
    }
    else
    {
        ll last = n/10;
        ll before_last = (n/100)*10 + (n%10);
        cout << max(last,before_last);
    }
    return 0;
}
