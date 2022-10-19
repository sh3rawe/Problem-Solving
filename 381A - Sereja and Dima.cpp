#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int cards , sereja=0, dima=0, turn=0;
    cin >> cards;
    int arr[cards];
    for(int i=0;i<cards;++i)
        cin >> arr[i];

    int start=0, end=cards-1 , play=0, max=0;
    while(start<=end)
    {
        if(arr[start]>=arr[end])
        {
            max = arr[start];
            start++;
        }
        else
        {
            max = arr[end];
            end--;
        }
        if(play%2 == 0)
            sereja+=max;
        else
            dima+=max;
        play++;
    }
    cout << sereja << " " << dima;
    return 0;
}
