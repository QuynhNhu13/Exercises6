#include <stdio.h>

void printArrayReverse(int array[], int n){
	printf ("Output: ");
	int i;
	for (i= n-1; i>=0; i--){
		printf ("%5d", array[i]);
	}
	printf("\n");
}

int main(){
	int n;
	int array[n];
	printf ("Enter the number of elements: ");
	scanf ("%5d", &n);
	printf ("Input: ");
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &array[i]);
	}
	printArrayReverse(array, n);
	
	return 0;	
}
