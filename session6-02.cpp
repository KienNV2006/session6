#include <stdio.h>
int main(){
	int number;
	int sum=0;
	printf("Moi ban nhap 5 so nguyen\n");
	for(int i=0; i<5; i++){
		printf("So thu %d: ", i+1);
		scanf("%d", &number);
		if(number%2==0){
			sum+=number;
		}
	}
	printf("Tong cac so chan la: %d", sum);
	return 0;
}