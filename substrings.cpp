#include<iostream>
using namespace std;
void substring(char a[])
{
     for(int i=0; a[i]!='\0';i++) ///i gives an initialization point
     {
         for(int j=i;a[j]!='\0';j++) /// j denotes the index till we have to move
         {
             for(int k=i;k<=j;k++) /// k prints out the string b/w i to j
             {
                 cout<<a[k];
             }
             cout<<endl;
         }
     }

}
int main()
{
     char a[100];
     cin.getline(a,100);
     substring(a);
    return 0;
}
