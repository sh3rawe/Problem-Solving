#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    int y,w,LCM;
    cin >> y >> w;
    int maxi = max(y,w);
    int Dot = 6-maxi+1;
    int maxNum = max(Dot,6);
    while(1)
    {
        if(maxNum%Dot==0 && maxNum%6==0)
        {
            LCM = maxNum;
            break;
        }
        ++maxNum;
    }

    int GCD = (Dot*6) / LCM;
    cout << Dot/GCD << "/" << 6/GCD;
    return 0;
}
 // The trick is to find the gcd and divide the numerator and denominator by it
 // , to print the answer in the format of numerator/denominator
