#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	printf("nhap mot chuoi ky tu: ");
	fgets(a,sizeof(a),stdin);
	printf("\nchuoi ky tu vua nhap la: ");
	for (int i=0 ; i< strlen(a); i++){
		printf("%c ", a[i]); 
	} 

	
	return 0; 
} 
