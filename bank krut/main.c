#include <stdio.h>
#include <stdlib.h>

struct data_alamat
{
	char jalan[15];
	char kota[8];
	char provinsi[10];
};

struct data_tanggal
{
	int tanggal, tahun, umur;
	char bulan[7];
};

struct rekening
{
	char nama[15];
	int norek,saldo;
	char bank[5];
	struct data_alamat add;
	struct data_tanggal date;
};

int main() 
{
	struct rekening rek[11];
	char f[15];
	int a,b,c,e,g,h,n;
	int d=0;
	printf("masukkan jumlah data = ");
	scanf("%i",&n);
	fflush(stdin);
	system("cls");
	for(a=0;a<n;a++)
	{
	printf("masukkan data terlebih dahulu : \n");
	printf("nama : ");
	gets(rek[a].nama);
	fflush(stdin);
	printf("nomor rekening : ");
	scanf("%i",&rek[a].norek);
	fflush(stdin);
	printf("nama bank : ");
	gets(rek[a].bank);
	fflush(stdin);
	printf("saldo : ");
	scanf("Rp.%i",&rek[a].saldo);
	fflush(stdin);
	printf("alamat : ");
	gets(rek[a].add.jalan);
	fflush(stdin);
	printf("kota : ");
	gets(rek[a].add.kota);
	fflush(stdin);
	printf("provinsi : ");
	gets(rek[a].add.provinsi);
	fflush(stdin);
	printf("tanggal lahir : ");
	scanf("%i",&rek[a].date.tanggal);
	rek[a].date.umur=2019-rek[a].date.tahun;
	fflush(stdin);
	printf("bulan lahir: ");
	gets(rek[a].date.bulan);
	fflush(stdin);
	printf("tahun lahir: ");
	scanf("%i",&rek[a].date.tahun);
	fflush(stdin);
	}
	system("cls");
	menu:
	puts("Menu:");
	puts("1.Tampilkan Data");
	puts("2.Cari Saldo");
	puts("3.Total Saldo");
	puts("4.Cari Data berdasarkan Kota atau Provinsi");
	puts("5.Cari Data Umur");
	puts("0. Exit");
	scanf("%i",&b);
	fflush(stdin);
	system("cls");
	
	switch(b)
	{
		case 1:
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
			for (a=0;a<n;a++)
			{
				printf("Nama		= %s\n",rek[a].nama);
				printf("Nomor Rekening	= %s - %i\n",rek[a].bank, rek[a].norek);
				printf("Alamat		= %s,%s,%s\n",rek[a].add.jalan,rek[a].add.kota,rek[a].add.provinsi);
				printf("TTL		= %i %s %i\n",rek[a].date.tanggal, rek[a].date.bulan, rek[a].date.tanggal);
			}
			system("pause");
			system("cls");
			goto menu;
			break;
		
		case 2:
			printf(" masukkan jumlah saldo yang dicari = ");
			scanf("%i",&c);
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
			for(a=0;a<n;a++)
			{
				if(rek[a].saldo==c)
				{
					printf("Nama	= %s\n",rek[a].nama);
					printf("Nomor Rekening	= %s - %i\n",rek[a].bank, rek[a].norek);
					d=d+1;
				}
				if(d=0)
				{
					printf("data yang anda cari tidak ada");
				}
			}
			printf("total hasil = %i\n",d);
			system("pause");
			system("cls");
			goto menu;
			break;
			
		case 3:
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
			for(a=0;a<n;a++)
			{
				e=e+rek[a].saldo;
			}
			printf("Total Saldo Seluruh Nasabah adalah RP.%i\n",e);
			system("pause");
			system("cls");
			goto menu;
			break;
		case 4:
			puts("pilih tipe input :");
			puts("1.Kota");
			puts("2.Provinsi");
			scanf("%i",&e);
			fflush(stdin);
			switch(e)
			{
				case 1:
					scanf("%s",&f);
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
					for(a=0;a<10;a++)
					{
						if(strcmp(rek[a].add.kota,f)==0)
						{
							printf("Nama	= %s\n",rek[a].nama);
							printf("Nomor Rekening	= %s - %i\n",rek[a].bank, rek[a].norek);
							printf("Kota	= %s",f);
						}
					}
					system("pause");
					system("cls");
					goto menu;
					break;
				
				case 2 :
					scanf("%s",&f);
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
					for(a=0;a<10;a++)
					{
						if(strcmp(rek[a].add.provinsi,f)==0)
						{
							printf("Nama	= %s\n",rek[a].nama);
							printf("Nomor Rekening	= %s - %i\n",rek[a].bank, rek[a].norek);
							printf("Kota	= %s",f);
						}
					}
					system("pause");
					system("cls");
					goto menu;
					break;
			 
		case 5:
			printf("masukkan umur = ");
			scanf("%i",&g);
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
			for(a=0;a<n;a++)
			{
				if(rek[a].date.umur<g){
					printf("Nama %s umur kurang dari %d\n",rek[a].nama,g);
				}else {
					printf("Nama %s umur lebih dari %d\n",rek[a].nama,g);
				}
			}
			system("pause");
			system("cls");
			goto menu;
			}
		default :
			break;
	}
	return 0;
}
