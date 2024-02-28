#include<stdio.h>

int printFibonacci (int num){
	int a=0, b=1, c;
	int i;
	for (i=1; i<=num; ++i){
		printf ("%d ", a);
		c=a+b;
		a=b;
		b=c;
	}
	
}

int main(){
	int n;
	printf ("Input a number: ");
	scanf ("%d", &n);
	printFibonacci(n);
	getch();
	return 0;
}

