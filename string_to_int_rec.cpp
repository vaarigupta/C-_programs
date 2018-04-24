#include<iostream>
#include<cstring>
using namespace std;
int str_to_int( char *a , int n)
{   /// base case
    if(n==0)
    {
        return 0;
    }
    int last_dig = a[n-1] - '0';
    int chota_arr = str_to_int(a , n-1);
    return chota_arr*10 + last_dig;


}
int main()
{
    char a[]= "1234";
    int n = strlen(a);
    int ans =str_to_int(a , n);
    cout<<ans<<endl;


    return 0;
}
