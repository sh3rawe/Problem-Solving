// PROBLEM LINk :- https://codeforces.com/problemset/problem/110/A


#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long

int main()
{
    fio;
    bool nearly_lucky = false;
    string num;
    cin >> num;
    int counter=0;
    for(int i=0;i<num.size();++i)
    {
        if(num[i]=='4' || num[i]=='7')
            counter++;
    }
    if(counter == 0){
        cout << "NO";
        return 0;
    }
    int temp = counter , c=0 , digits=0;
    while(temp > 0)
    {
        digits++;
        if((temp%10)==4 || (temp%10)==7)
            c++;
        temp = temp/10;
    }
    if(c == digits)
        cout << "YES";
    else

        cout << "NO";
    return 0;
}
