#include<iostream>
using namespace std;
void search_no(int a[][10],int rows,int cols,int key)
{
    int i=0,j=cols-1;
    while(i<rows&&j>=0)
    { if(a[i][j]==key) /// its time complexity = rows+ cols
    /// we start from the last col of first row
    {
    cout<<"Found at position "<<i<<" "<<j<<endl;
    break;
    }
    else if(a[i][j]>key)
    {
      j--;
    }
    else
    {
       i++;
    }
    }
    cout<<"not found";
    return;
}


int main()
{  int a[4][4]={ {1,3,5,7},{2,8,10,12} ,{4,9,11,16},{6,13,15,18}};
int rows =4,cols=4;
int key;
cout<<"Enter the element to search "<<endl;
cin>>key;
 search_no(a,rows,cols,key);
    return 0;
}

