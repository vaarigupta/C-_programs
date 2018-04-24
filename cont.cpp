#include<iostream>
using namespace std;
int main()
{
    int i=1;

    while(i<=10)
    { cout<<i<<" ";
         if(i==8)
        { i++;/// when i++ is written here then i is increased by 1
        /// then continue statement gets unaffective
        /// and does not print 8 infinitely
            continue;
 /// but when i++ is written after the continue statement then,
 /// then continue statement forms an infinite loop
 /// and never comes to the condition of increment and prints the condition infinitely

        }

        i++;

    }
}
