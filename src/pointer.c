#include <stdio.h>
void swap(int *a,int *b);
int point(){
	int a = 1;
	int b = 2;
	printf("%d",a);
	printf("%d",b);
	swap(&a,&b);
	printf("%d",a);
	printf("%d",b);
	return 0;
}
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
