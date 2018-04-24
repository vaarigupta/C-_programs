#include<iostream>
using namespace std;
#include"BinaryTreeNode.h"

class BinaryTreeNode

{
public:
    int data;


};
int count (BinaryTreenode* root )
{
    if (root== NULL)
    {
        return 0;
    }
    int x= count(root -> left);
    int y= count(root-> right);
    return 1+x+y;
}
