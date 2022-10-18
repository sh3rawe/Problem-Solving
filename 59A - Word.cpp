#include <bits/stdc++.h>

using namespace std;
#define fio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    fio;
    string s;
  // Declare Two Variables to count how many uppercase letters and how many lowercaseone
    int lower_count=0 , upper_count=0;
    cin >> s;
  // Loop over the string and count
    for(auto i=0;i<s.length();++i)
    {
        if(s[i]>=65 && s[i]<=90)
            upper_count++;
        else if(s[i]>=97 && s[i]<=122)
            lower_count++;
    }
// compare the number of lowercase letters and uppercase letters
    if(lower_count>=upper_count){
        transform(s.begin(),s.end(),s.begin(),::tolower); // function transform converts from
                                                          // lowercase to uppercase and viceversa
        cout << s;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout << s;
    }
    return 0;
}
