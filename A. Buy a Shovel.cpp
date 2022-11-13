#include <bits/stdc++.h>
 
using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
 
int main()
{
    fio;
    int k , r ,;
    cin >> k >> r;  // 15 2
    for(int i=1;i;++i)
    {
        if((i*k)%10 == 0)
        {
            cout << i;
            break;
        }
        if((i*k)%10 == r)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
