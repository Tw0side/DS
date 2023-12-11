#include<stdio.h>
#include<stdlib.h>

struct binary
{
int data;
struct binary *rchild,*lchild;
};



struct binary* create()
{

struct binary *r=NULL,*new,*ptr,*parent;
int flag=0;


char ch;
int item;
do
{
printf("\nEnter the item /enter 0 for exit\n");
scanf("%d",&item);

if(r==NULL)
{

new=(struct binary*)malloc(sizeof(struct binary*));
new->data=item;
new->lchild=NULL;
new->rchild=NULL;
r=new;
}
else 
{
ptr=r;

while(ptr!=NULL&&flag==0)
{
if(ptr->data==item)
{
flag=1;
printf("\nItem exists\n");
break;
}
else if(item<ptr->data)
{
parent=ptr;
ptr=ptr->lchild;
}
else
{
parent=ptr;
ptr=ptr->rchild;
}
if(ptr==NULL)
{
new=(struct binary*)malloc(sizeof(struct binary*));
new->data=item;
new->lchild=NULL;
new->rchild==NULL;
if(parent->data<item)
{
parent->rchild=new;
}
else
{
parent->lchild=new;
}
}
}
}
}while(item!=0);
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




