#include<iostream>
using namespace std;

struct NODE{
  int data;
  struct NODE *left, *right;
}*root = NULL , *p=NULL , *np = NULL , *q;

void BST()
{
  int value ;
  while (value != -1)
  {
    if  (root == NULL)
    {
      root = new NODE;
      cout<<"enter data for root\n";
      cin>>root->data;
      root->right=NULL;
      root->left=NULL;

    }
    else{
      p = root;
      cout<<"enter data for node\n";
      cin>>value;
      while(true){
        if (value < p->data)
        {
          if (p-> left == NULL)
          {
            p->left = new NODE;
            p = p->left;
            p->data = value;
            p->left = NULL;
            p->right = NULL;
            cout<<"value entered in left\n";
            break;
          }
          else if (p->left != NULL)
          {
            p = p->left;
          }
        }
        else if (value > p->data)
        {
          if (p->right == NULL)
          {
            p->right = new NODE;
            p = p->right;
            p->data = value;
            p->left = NULL;
            p->right = NULL;
            cout<<"value entered in right\n";
            break;
          }
          else if (p->right != NULL)
          {
            p = p->right;
          }
        }
      }
    }
  }
}
int main()
{
  BST();
  return 0;
}