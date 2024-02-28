#include <stdio.h>

int decimalBinary(int num){
	int binaryNumber [32];
	int i=0;
	
	while (num>0){
		binaryNumber[i]= num%2;
		num = num/2;
		i++;
	}
	int j;
	printf ("Output: ");
	for (j=i-1; j>=0; j--){
		printf ("%d", binaryNumber[j]);
	}
	printf ("\n");
}

int main(){
	int num;
	printf ("Input: ");
	scanf ("%d", &num);
	decimalBinary(num);
	getch();
	return 0;
}
