#include <stdio.h>
#include <stdlib.h>

struct ipk
{
	char nama[10];
	int sks;
	char mk[6][10];
	char nilai [6];
	int ips;
	int sksmk[6];
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
			printf("masukkan nama mk = ");
			scanf("%s",&ipk[a].mk[b]kn );
			fflush(stdin);
			printf("masukkan nilai huruf = ");
			gets(ipk[a].mk[b][b+1]);
			fflush(stdin);
//			printf("masukkan nilai sks mk = ");
//			scanf("%i",&ipk[a].sksmk[b]);
//			fflush(stdin);
			
		}
	}
//	for(a=0;a<n;a++)
//	{
//		for(b=0;b<5;b++)
//		{
//			if(strcmp(ipk[a].mk[b][b+1],a)==0)
//			{
//				ipk[a].ips=ipk[a].ips+4*ipk[a].sksmk;
//			}
//			else if(strcmp(ipk[a].mk[b][b+1],b)==0)
//			{
//				ipk[a].ips=ipk[a].ips+3*ipk[a].sksmk;
//			}
//			else if(strcmp(ipk[a].mk[b][b+1],c)==0)
//			{
//				ipk[a].ips=ipk[a].ips+2*ipk[a].sksmk;
//			}else if(strcmp(ipk[a].mk[b][b+1],d)==0)
//			{
//				ipk[a].ips=ipk[a].ips+1*ipk[a].sksmk;
//			}
//		}
//	}
	system("cls");
	for(a=0;a<n;a++)
	{
		printf("nama= %s\n",ipk[a].nama);
		for(b=0;b<5;b++)
		{
			printf("nomor mk = %s",ipk[a].mk[b][b]);
			printf("nilai = %s",ipk[a].mk[b][b+1]);
	
		}
	}
	
	return 0;
}
