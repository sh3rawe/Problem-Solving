#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int num_of_problems , P , V , T , approve = 0;
    cin >> num_of_problems;
    while(num_of_problems--)
    {
        cin >> P >> V >> T;
        if((P+V+T)>=2)
            approve++;
    }
    cout << approve << endl;
    return 0;
}
