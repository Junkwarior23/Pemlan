#include <stdio.h>
#include <stdlib.h>

struct ipk
{
	char nama[10];
	int sks;
	int mk[5][2];
};

int main() 
{
	struct ipk ipk[5];
	int a,b,c,d,n;
	printf("masukkan jumlah data = ");
	scanf("%i",&n);
	fflush(stdin);
	
	for(a=0;a<n;a++)
	{
		printf("masukkan nama= ");
		gets(ipk[a].nama);
		fflush(stdin);
		for(b=0;b<5;b++)
		{
			printf("masukkan nomor mk = ");
			scanf("%i",&ipk[a].mk[b][b]);
			fflush(stdin);
			printf("masukkan nilai = ");
			scanf("%i",&ipk[a].mk[b][b+1]);
			fflush(stdin);
		}
	}
	for(a=0;a<n;a++)
	{
		printf("nama= %s\n",ipk[a].nama);
		for(b=0;b<5;b++)
		{
			printf("nomor mk = %i\n",ipk[a].mk[b][b]);
			printf("nilai = %i\n",ipk[a].mk[b][b+1]);
	
		}
	}
	
	return 0;
}
