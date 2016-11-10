#include<stdio.h>
int main(void){
	//print a 3 digits number in the oposite way
    int a = 0;
    scanf("%d",&a);
	int t1 = a/100;	
	int t3 = a%10;
	int t2  =(a%100-t3)/10;
	if(t3 == 0){
		if(t2 == 0){
			printf("%d",t1);
			return 0;
		}
		printf("%d",t2*10+t1);
		return 0;
	}
    printf("%d",t3*100+t2*10+t1);
	return 0;
}