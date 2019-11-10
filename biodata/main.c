#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char a[30],b[30],c[30],d[30],e[30],f[30];
	int g,h;
	mulai:
	printf("Masukkan NAMA 		: ");
	scanf("%i",&g);
	gets(a);
	printf("Masukkan NPM 		: ");
	gets(b);
	printf("Masukkan ALAMAT		: ");
	gets(c);
	printf("Masukkan NO. HP		: ");
	gets(d);
	printf("Masukkan FAKULTAS	: ");
	gets(e);
	printf("Masukkan PROGAM STUDI	: ");
	gets(f);
	puts("ingin mengulangi input data ?(1=yes/0=no)");
	scanf("%i", &h);
	if (h==1)
		{
			system("cls");
			goto mulai;
		}
	else 
		{
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
			puts("Inilah Data Anda :");
			printf("Nama		: %s\n",a);
			printf("ALAMAT		: %s\n",c);
			printf("NO.HP		: %s\n",d);
			printf("NPM		: %s\n",b);
			printf("PROGAM STUDI	: %s\n",f);
			printf("FAKULTAS	: %s\n",e);
			puts("=================================");
			puts("Created By: \n Nama		: M. Daffa Arifin\n NPM		: 18081010086\n Fakultas	: Ilmu Komputer\n Jurusan	: Teknik Informatika");
			puts("=================================");
		}	
	return 0;
}
