#include<iostream>
using namespace std;
int fact(int n)
{ if(n==0)
{
    return 1;
} /// this is the base case , we cant minimize this problem anymore
/// that is , negative numbers cant be considered  ,so 0 will be the lowest value for n

   int ans = n*fact(n-1);
   return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"the factorial of  " << n <<" is :"<<fact(n);


    return 0;
}
