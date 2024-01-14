#include<stdio.h>

void dayFibonacci (int n){
	int a=0, b=1;
	int next;
	printf ("Output: ");
	int i=0;
	for (i; i<n; i++){
		printf ("%d ", a);
		next=a+b;
		a=b;
		b=next;	
	}
	printf ("\n");
}

int main (){
	int dauvao;
	printf ("Input: ");
	scanf ("%d", &dauvao);
	dayFibonacci (dauvao);
	return 0; 
}
