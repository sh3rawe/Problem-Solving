#include <bits/stdc++.h>
 
using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
 
int main()
{
    fio;
    int n,b,d,counter=0,putted=0;
    cin >> n >> b >> d; // 3 10 10
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x; // 5 7 7
        if(x<=b)
            putted+=x; // 7
            
        if(putted>d){
            counter++; // 1
            putted=0;  // 0
        }
    }
    cout << counter;
    return 0;
}
