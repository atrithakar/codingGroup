/*
Problem:

You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/
#include <iostream>
#include <cmath>
using namespace std;
class Solution {
private:
    int reverse(int n)
    {
        int r=0;
        while(n)
        {
            r=r*10 + n%10;
            n/=10;
        }
        return r;
    }
public:
    int maximum69Number (int num) {
        int rev = reverse(num),x=0,flag=0;
        while(rev)
        {
            if(rev%10==6)
            {
                flag = 1;
                break;
            }
            x++;
            rev/=10;
        }
            rev=reverse(num);
        if(flag)
        {
            rev+=3*(pow(10,x));
        }
        return reverse(rev);


        
    }
};
int main()
{
    Solution byAtri;
    int t;
    cin>>t;
    cout<<byAtri.maximum69Number(t)<<endl;
    return 0;
}