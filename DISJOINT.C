#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr1[30],i,n,a,b,temp,arr2[30],ch;
clrscr();
printf("\n1.CREATE");
printf("\n2.UNION");
printf("\n3.FIND");
printf("\n4.EXIT");
while(1)
{
printf("\n Enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:// CREATE
printf("enter no.of elements in set:");
scanf("%d",&n);
printf("enter elements in set:");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr2[i]=i;
}
break;
case 2://UNION
printf("\n enter the index of elements (2 indices) which are to be connected(union):\n");
scanf("%d %d",&a,&b);
temp=arr2[a];
for(i=0;i<n;i++)
{
if(arr2[i]==temp)
arr2[i]=arr2[b];
}
printf("\n elements status-after-union\n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\n",arr1[i],arr2[i]);
}
printf("\n elements have been successfully connected(uniom operation)\n");
break;
case 3://FIND
printf("\n enter the index of elements (2 indices) whose connectiom is to be checked (find operation):\n");
scanf("%d %d",&a,&b);
if(arr2[a]==arr2[b]);
printf("\n elements at indics %d&%d are not connected \n",a,b);
break;
case 4://EXIT
exit(0);
break;
default:
printf("\n wrong choice,please select a valid choice");
break;
}
}
}