#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int b=1; 
	char kytu; 
	printf("nhap mot chuoi ky tu: ");
	fgets(a,sizeof(a),stdin);
	for (int i = 0; i < strlen(a); i++){
		if(a[i]== ' '){
			b++; 
		}
	}  
	printf("chuoi ky tu vua nhap co so tu la: %d", b); 
	return 0; 
}
