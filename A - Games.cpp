#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    int n,counter=0;
    cin >> n;
    // Two arrays one for home kit and the other for guest kit
    int h[n] , g[n];
    for(int i=0;i<n;++i)
    {
        cin >> h[i] >> g[i];
    }
    // Compare each item from first array with the second array
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(h[i]==g[j])
                counter++;
        }
    }
    cout << counter;
    return 0;
}
