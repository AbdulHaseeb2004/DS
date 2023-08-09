#include<stdio.h>
int main() {
	int number;
	printf("enter a number: ");
	scanf("%d",&number);
	int factorial = 1;
	for (int i=1;i<=number;i++); {
	factorial *=1;
	}
	printf("factorial of %d is %d\n",number,factorial);
	return 0;
}
