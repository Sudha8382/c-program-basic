//wap to find largest element within 10 elements of array;
//wap to search an element in an array;
//wap to input 10 numbers 
//1.& find howmany times an element is present 
//2.&print the indexes on which a given 
//wap a prog
//first index;
//last index occurance;
//index of occurance;
//total no of ocurance in the list
//wap to input 10 elements of array and find largestelement in the list
//wap to input 10 elements of array and sort the element in ascending order;
void main(){
	int n[10],ele,i,t=0;
	printf("enter 10 num:");
	for( i=0;i<=9;i=i+1){
		scanf("%d",&n[i]);
	}
	printf("enter element to  search:");
	scanf("%d",&ele);
	for(i=0;i<=9;i=i+1){
		if(ele==n[i]){
			t=1;
			printf("successfully search at index:%d",n[i]);
			break;
		}
	}
	if(t==0){
		printf("unsuccesful")
	}
}
