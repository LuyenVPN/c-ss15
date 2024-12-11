#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int b=0; 
	printf("nhap mot chuoi ky tu: ");
	fgets(a,sizeof(a),stdin); 
	for (int i = 0; i < strlen(a); i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
            b++;
        }
    }

	printf("So ky tu la chu cai trong chuoi la: %d ", b); 
	return 0; 
}
