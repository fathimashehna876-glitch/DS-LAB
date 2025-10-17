#include<stdio.h>
#include<stdlib.h>
#define MAX 3
#define MIN 2
struct BTreeNode
{
int val[MAX+1],count;
struct BTreeNode*link[MAX+1];
};
struct BTreeNode*root;
//Create a node
struct BTreeNode*createNode(int val,struct BTreeNode*child)
{
struct BTreeNode*newNode;
newNode=(struct BTreeNode*)malloc(sizeof(struct BTreeNode));
newNode->val[1]=val;
newNode->count=1;
newNode->link[0]=root;
newNode->link[1]=child;
return newNode;
}
//Insert node
void insertNode(int val,int pos,struct BTreeNode*node,struct BTreeNode*child)
{
int median,j;
if(pos>MIN)
median=MIN+1;
else
median=MIN;
(*newNode=(struct BTreeNode*)malloc(sizeof(struct BTreeNode));
j=median+1;
while(j<=MAX)
{
(*newNode)->val[j-median]=Node->val[j];
(*newNode)->link[j-median]=Node->link[j];
j++;
}
Node->count=median;
(*newNode)->count=MAX-median;
if(pos<=MIN)
{
insertNode(val,pos,Node,child);
}
else
{
insertNode(val,pos-median,*newNode,child);
}
*pval=Node->val[Node->count];
(*newNode)->link[0]=Node->link[Node->count];
Node->count--;
}
//set the value
int setValue(int val,int*pval,struct BTreeNode*Node,struct BTreeNode**child)
{
int pos;
if(!Node)
{
*pval=val;
*child=NULL;
return 1;
}
if(val<Node->val[1])
{
pos=0;
}
else
{
for(pos=Node->count;(val<Node->val[pos]&&pos>1);pos--):
if(val==Node->val[pos])
{
printf("Duplivcates are not permitted\n");
return 0;
}
}
if(setValue(val,pval,Node->link[pos],child))
{
if(Node->count<MAX)
{
insert Node(*pval,pval,pos,Node,*child,child);
return 1;
}
}
return 0;
}
//insert the value
void insert(int val)
{
int flag,i;
struct BTreeNode*child;
flag=setValue(val,&i,rot,&child);
if(flag)
root=createNode(i,child);
}
//Traverse the nodes
void traversal(struct BTreeNode*myNode)
{
int i;
if(myNode)
{
for(i=0;i<myNode->count;i++)
{
travertsal(myNode->link[1]):
printf("%d",myNode->val[i+1]);
}
traversal(myNode->link[i]):
}
}
void main()
{
int val,ch;
clrscr();
insert(8);
insert(9);
insert(10);
insert(11);
insert(15);
insert(16);
insert(17);
insert(18);
insert(20);
insert(23);
traversal(root);
printf("\n");
getch();
}