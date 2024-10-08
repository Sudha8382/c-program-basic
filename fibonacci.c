//wap to print fibonacci series till n;
//wap to print fibonacci series till n terms;
#include<stdio.h>
void main(){
	int a=0,b=1,n;
	printf("enter the num:");
	scanf("%d",&n);
	printf("%d  %d ",a,b);
	int next=a+b;
	while(next<=n)
	{
		printf(" %d ",next);
		a=b;
	    b=next;
	    next=a+b;
	}
}
