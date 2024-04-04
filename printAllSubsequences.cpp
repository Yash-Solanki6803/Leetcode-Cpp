#include <bits/stdc++.h>
using namespace std;


void Subsequence(string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char c = s[0];
    string ros = s.substr(1);
    Subsequence(ros,ans);
    Subsequence(ros,ans+c);

}

int main()
{
    Subsequence("ABC","");
    return 0;
}