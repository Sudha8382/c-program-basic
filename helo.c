#include <stdio.h>
/*int main() {
	int num1,result;
	num1=20;//direct initialization
	result=num1+30;
	printf("result=%d",result);
   return 0;
}*/

//void main(){
//	printf("output=%fok thanks",40.6+49.3);
//	
//}

void main()
{//scope of variable;
	float num1 ,num2;
	printf("enter two decimal num:");
	scanf("%f%f",&num1,&num2);//user input function;
	float res=num1+num2;
	printf("output=%1f ok thanks",res);
}
