#include <iostream>
using namespace std;

int main()
{   int n;
    cin>>n;
    int A[n][n];
		int star = 0;
		for (int i = 0; i < n; i++) {
			for (int j = ((n - 1) / 2) - star; j <= ((n - 1) / 2) + star; j++) {
			/*magic line above ^
	     drop in the middle of the matrix with (n-1)/2
	      and go back by the number of stars you want to place*/
				A[i][j] = 1;
			}
			if (i >= (n - 1) / 2) {
				star -= 1;
			} else {
				star += 1;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (A[i][j] == 1) {
					cout<<"*";
				} else {
					cout<<" ";
				}
			}
			cout<<endl;
		}
    return 0;
}
