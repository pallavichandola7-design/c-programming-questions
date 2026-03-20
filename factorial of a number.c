#include<stdio.h>
int main()
{
	int num,i;
	long long factorial=1;
	printf("enter a number:");
	scanf("%d",&num);
	if(num<0) {
		printf("factorial of a negative no does not exist.");		
} else{
	for(i=1;i<=num;i++) {
	factorial=factorial*i;
}
printf("the factorial of %d is: %lld",num,factorial);
}
return 0;
}