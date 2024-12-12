#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int b=0,c=0,d=0; 
	printf("nhap mot chuoi ky tu: ");
	fgets(a,sizeof(a),stdin); 
	for (int i = 0; i < strlen(a); i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
            b++;  
        } 
        else if (a[i] >= '0' && a[i] <= '9') {
            c++; 
        }
        else {
            d++; 
        }
    }
    printf("So chu cai trong chuoi: %d\n", b);
    printf("So chu so trong chuoi: %d\n", c);
    printf("So ky tu dac biet trong chuoi: %d\n", d-1);
	return 0; 
}
