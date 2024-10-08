#include<stdio.h>
int main(){
float a,b,c,d,e;
printf("enter the 5 subject marks\n");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
float total=a+b+c+d+e;
 float percentage=(total*100)/500;
printf("total marks=%f\n",total);
printf("percentage=%f\n",percentage);
if(percentage>32){
	printf("passed");
}
else{
printf("failed");
}
}
