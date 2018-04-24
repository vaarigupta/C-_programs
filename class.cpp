#include<iostream>
#include<cstring>
using namespace std;
class fruits
{
public:
    int price;
    char name[20];
    void print()
    {
        cout<<price<<endl;
        cout<<name<<endl;

    }
};
int main()
{

    fruits A;
    cout<<sizeof(A)<<endl;
    strcpy(A.name,"apple");
    A.price = 50;
    A.print();

    return 0;
}
