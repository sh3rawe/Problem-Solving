#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    ll num,x,child=0;
    cin >> num >> x;
    while(num--)
    {
        char ch;
        ll d;
        cin >> ch >> d;
        switch(ch)
        {
        case '+' :
            x+=d;
            break;
        case '-' :
            if(x>=d)
                x-=d;
            else
                child++;
            break;
        }
    }
    cout << x << " " << child;
    return 0;
}
