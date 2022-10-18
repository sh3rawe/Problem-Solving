#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    int tc ,counter=0;
  
  // store the values in string not integer
  // because if you store them in integer , it will read 01 as 1
    string x,y;
  
    cin >> tc;
    while(tc--)
    {
        y=x;
        cin >> x;
      
      // compare last number in first string and
      // first number in second string
      
        if(x[1]==y[0])
            counter++; // here , you count the spaces between groups
    }
  
    cout << counter+1; // print the counter + 1 , because the number of groups
                       // will also greater than spaces by 1
    return 0;
}
