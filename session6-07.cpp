#include <stdio.h>
int main(){
	int number;
	int i;
	printf("Moi ban nhap so nguyen: ");
	scanf("%d", &number);
	printf("Cac uoc cua %d la: ", number);
	for(i=number; i>=1; i--){
		if(number%i==0){
			printf("%d ",i);
		}
	}
	return 0;
}
