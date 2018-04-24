#include<iostream>
#include<cstring>
using namespace std;
int str_to_int(char *a , int len)
{
    ///base case
    if(len==0)
    {
        return 0;
    }
    int last_digit = a[len-1] - '0';
    int rem_digits = str_to_int(a , len-1);
    return rem_digits*10 + last_digit;


}
int main()
{
    char a[]= "12345";
    int len = strlen(a);
    int ans = str_to_int(a,len);
    cout<<ans<<" "<<ans+1<<" "<<ans-1<<endl;


}
