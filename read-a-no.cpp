#include <iostream>
using namespace std;
int main()
{
    ///read a no till the user enter a positive no
    ///means read only negative no not positive
     int no;

     cin>>no; ///intialisation

      while (no<0) ///termination
      {
        cout<<no;
        cin>>no;///update condition
      }


}
