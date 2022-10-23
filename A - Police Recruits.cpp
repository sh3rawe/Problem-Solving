#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int crimes , sum=0, counter=0;
    cin >> crimes;
    int arr[crimes];
    for(int i=0;i<crimes;++i)
        cin >> arr[i];

    for(int i=0;i<crimes;++i)
    {
        if((sum+arr[i]) < 0)
            counter++;
        else
            sum+=arr[i];
    }
    cout << counter;
    return 0;
}
