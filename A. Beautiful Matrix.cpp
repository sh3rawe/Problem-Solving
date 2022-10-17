#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int x;
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=5;++j)
        {
            cin >> x;
            if(x==1)
            {
                cout << abs(double(i-3)) + abs(double(j-3));
                break;
            }
        }
    }
    return 0;
}
