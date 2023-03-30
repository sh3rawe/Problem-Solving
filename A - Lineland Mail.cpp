// CODEFORCES PROBLEM : https://codeforces.com/contest/567/problem/A


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
#define ef else if
#define dd double

ll factorial(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    loop(n)cin>>arr[i];
    loop(n){
        if(i == 0)
            cout << arr[i+1]-arr[i] << " " << arr[n-1]-arr[i];
        else if(i == n-1)
            cout << arr[n-1]-arr[n-2] << " " << arr[n-1]-arr[0];
        else
            cout << min(arr[i]-arr[i-1],arr[i+1]-arr[i]) << " " << max(arr[n-1]-arr[i],arr[i]-arr[0]);
        cout << '\n';
    }
    return 0;
}
