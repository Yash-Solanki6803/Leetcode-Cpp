#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        int original =x;
        int reverse = 0;
        while(x>0){
            int remainder = x%10;
            if(reverse>INT_MAX/10){
                return 0 ;
            }
            reverse = reverse*10 + remainder;
            x/=10;
        }
        return (reverse==original);
    }

int main()
{
    cout<<isPalindrome(10)<<endl;
    return 0;
}