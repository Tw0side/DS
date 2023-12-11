#include<stdio.h>
#include<stdlib.h>

struct binary
{
int data;
struct binary *rchild,*lchild;
};



struct binary* create()
{

struct binary *r=NULL;

r=(struct binary*)malloc(sizeof(struct binary*));
r->lchild=NULL;
r->rchild=NULL;

char ch;
printf("\nEnter the data\n");
scanf("%d",&r->data);
printf("\nDoes %d contain left child Y/N\n",r->data);
scanf("%c",&ch);
scanf("%c",&ch);
if(ch=='Y'||ch=='y')
{
r->lchild=create();
}
printf("\nDoes %d contain right child Y/N\n",r->data);
scanf("%c",&ch);
scanf("%c",&ch);
if(ch=='Y'||ch=='y')
{

r->rchild=create();
}

return r;
}

void inorder(struct binary *tree)
{
if(tree!=NULL)
{
inorder(tree->lchild);
printf("%d\t",tree->data);
inorder(tree->rchild);
}
}

void preorder(struct binary *tree)
{
if(tree!=NULL)
{

printf("%d\t",tree->data);
preorder(tree->lchild);
preorder(tree->rchild);
}
}

void postorder(struct binary *tree)
{
if(tree!=NULL)
{
postorder(tree->lchild);
postorder(tree->rchild);
printf("%d\t",tree->data);

}
}

int main()
{
struct binary *root;

root=create();
printf("\nThe inorder traversal is........\n");
inorder(root);
printf("\nThe preorder traversal is........\n");
preorder(root);
printf("\nThe postorder traversal is........\n");
postorder(root);
return 0;
}




