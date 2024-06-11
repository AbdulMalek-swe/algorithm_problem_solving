#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int ar[n];
for(int a=0;a<n;a++)
{
scanf("%d",&ar[a]);
}
int i,x;
i=0;
x=0;
for(int a=0;a<n;a++)
{
if(ar[a]<=10)
{
  printf(("A[%d] = %d\n"),a,ar[a]);
}
}
}