#include<iostream>
#include<cstring>
using namespace std;
int main()
{  int n;
   cin>>n;
   cin.get();
   char current_string[100] , largest_string[100];
   int current_len=0 , largest_len=0;

   for(int i=0;i<n;i++)
   {
       cin.getline(current_string,100);
       current_len= strlen(current_string);
       if(current_len>largest_len)
       {
           largest_len = current_len;
           strcpy(largest_string,current_string);
       }


   }
   cout<<"The largest string is"<<largest_string<<endl;
   cout<<"Its length is"<<largest_len<<endl;
















    return 0;
}
