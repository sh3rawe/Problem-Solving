#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int arr1[50001];
int arr2[50001];
int arr3[50001];

int main()
{
    fio;
    int n ,count1=0, count2=0, count3=0;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        int num; cin >> num;
        if(num==1){
            arr1[count1] = i+1;
            count1++;
        }
        else if(num==2){
            arr2[count2] = i+1;
            count2++;
        }
        else if(num==3){
            arr3[count3] = i+1;
            count3++;
        }
    }

    int mini = min(count1,count2);
    int mini2 = min(mini,count3);

    if(mini2 != 0)
    {
        cout << mini2 << endl;
        for(int i=0;i<mini2;++i)
        {
            cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;;
        }
    }
    else
        cout << mini2;
    return 0;
}
