#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	printf("nhap mot chuoi ky tu: "); 
	fgets(a,sizeof(a),stdin);
	printf("\nchuoi ky tu vua nhap la: ");
	fputs(a,stdout); 
	printf("do dai chuoi la: %d", strlen(a)-1); 
	return 0; 
} 
