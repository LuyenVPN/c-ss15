#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int b=0;
	char kytu; 
	printf("nhap mot chuoi ky tu: ");
	fgets(a,sizeof(a),stdin);
	printf("\nnhap ki tu bat ki: ");
	scanf("%c", &kytu); 
	for (int i= strlen(a) ; i >= 0; i--){
		if(a[i]== kytu){
			b++;
		} 
	}
	printf("ky tu %c xuat hien %d lan", kytu, b); 
	return 0; 
}
