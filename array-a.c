void main(){
	int a[10],i,n,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("The elements:");
	for(i=0;i<=n;i++){
		printf(" %d ",a[i]);
	}
	return 0;
}
