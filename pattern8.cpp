#include<iostream>
using namespace std;
int main()
{
      /* pattern
                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1

                         */
    int n;
    cin>>n;
    ///1st part
    for (int i=1;i<=n;i++)
    {
        ///spaces
         for(int s=1;s<=(n-i);s++)
         {
             cout<<"    ";
         }


        ///inc nos
        int no=i;
        for(int inc =1;inc<=i;inc++)
        {
            cout<<no<<"   ";
            no++;
        }

       ///dec nos
       no= (2*i)-2;
       for(int dec=1;dec<=(i-1);dec++)
       {
           cout<<no<<"   ";
           no--;
       }
       cout<<endl;
    }

    ///2nd part
    for(int i=1;i<=(n-1);i++)
    {
        ///spaces
        for(int s=1;s<=i;s++)
        {
            cout<<"    ";
        }
        ///inc nos
        int no= n-i;
        for(int inc=1;inc<=(n-i);inc++)
        {
            cout<<no<<"   ";
            no++;
        }
        ///dec nos
        int j=n-2;
        no=n-(2*i)+j;
        for(int dec=1;dec<=(n-1-i);dec++)
        {
            cout<<no<<"   ";
            no--;
            j--;
        }
        cout<<endl;
    }
    return 0;
}

