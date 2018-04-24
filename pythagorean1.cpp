    #include<iostream>
    #include<cmath>
    using namespace std;
    int main()
    { int n,no;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        int b=sqrt(no);
        for(int a=0;a<=b;a++)
     {
        for(int j=b;j>=a;j--)
     {
         int ans =(a*a)+(j*j);
        if(ans==no)
        {
           cout<<"("<<a<<","<<j<<")"<<" ";
           break;
        }

     }

     }
     cout<<endl;


    }

        return 0;
    }
