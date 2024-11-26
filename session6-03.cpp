#include <stdio.h>
int main(){
	int n;
	int i=2006;
	printf("Moi ban nhap mat khau: ");
	scanf("%d", &n);
	while(n!=i){
		printf("Moi ban nhap mat khau: ");
		scanf("%d", &n);
	}
	printf("Ban da nhap dung");
	return 0;
}