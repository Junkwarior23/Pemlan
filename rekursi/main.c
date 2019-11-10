#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int pangkat(int a, int b){
	if(b != 1){
		return a*pangkat(a,(b-1));
	}
	else{
		return a;
	}
}



int main(int argc, char *argv[]) 
{
	int a,b,c,i;
	c=1;
	printf("masukkan angka	=");
	scanf("%i",&a);
	printf("masukkan pangkat	=");
	scanf("%i",&b);
	system("cls");
	puts("=================================");
	system("COLOR 01");
	printf("LOADING");
	Sleep(1000);
	system("COLOR 02");
	printf(".");
	system("COLOR 03");
	Sleep(1000);
	system("COLOR 04");
	printf(".");
	system("COLOR 05");
	Sleep(1000);
	system("COLOR 06");
	printf(".");
	Sleep(1000);
	system("COLOR 07");
	printf(".");
	system("COLOR 08");
	Sleep(1000);
	system("COLOR 09");
	printf(".");
	system("COLOR 10");
	Sleep(1000);
	printf(".\n");
	Sleep(1000);
	puts("=================================");
	Sleep(1000);
	system("cls");
	puts("=================================");
	puts("YAAY.... DATA ANDA TELAH SIAP");
	puts("=================================");
	Sleep(1000);
	system("cls");
	system("COLOR 09");
	puts("=================================");
	
	printf("Hasil rekursifnya adalah %d\n",pangkat(a,b));
	
	for(i=0;i<b;i++){
		c=c*a;
	}
	
	printf("Hasil dari iterasi biasa adalah %d\n",c);
	puts("=================================");
	

	return 0;
}
