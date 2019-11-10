#include <stdio.h>
#include <stdlib.h>

struct bilangan
{
	int a;
	bilangan *next;
};
typedef struct bilangan bil;

bil *gaweanyar(void)
{
	bil *pointer;
	pointer =(bil *)malloc(sizeof(bil));
	return(pointer);
}


int main() 
{
	bil *head;
	int pilih,b;

  	head = NULL;
     printf("masukkan pilihan\n");
     printf("1. tambah data di awal\n");
     printf("2. tambah data di tengah list\n");
     printf("3. hapus data\n");
     printf("4. cetak isi list\n");
     printf("MASUKKAN PILIHAN (tekan q untuk keluar) : ");
     fflush(stdin);
     scanf("%i", &pilih);
     switch(pilih){
     	case 1:
     	//	tambahAwal(&head);
			  bil *pTemp;
			  system("cls");
			  fflush(stdin);
			  printf("masukkan bilangan integer : ");
			  fflush(stdin);
			  scanf("%d", &b);
			  pTemp = (bil *)malloc(sizeof(bil));
			
			  if (pTemp != NULL){
			  	  pTemp->data = b;
			      pTemp->next = NULL;
			      insertNode(ndas, NULL, pTemp);
			  }
			  else{
			      printf("Alokasi memori gagal");
			      getch();
			  }
	     		break;
    	case 2:
			tambahData(&head);
			break;
     	case 3:
     		hapusData(&head);
     		break;
     	case 4:
     		//tranverse(head);
     		node *pWalker;

		    system("cls");
			pWalker = ndas;
			while (pWalker != NULL){
		   	printf("%d->", pWalker -> a);
		   	pWalker = pWalker -> next;
			}
		   printf("NULL");
     		break;
     	default
  			deleteList(head);
  			break;
	return 0;
}
