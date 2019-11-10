#include <stdio.h>
#include <stdlib.h>
#include <tring.h>
struct vanguard
{
	char nama[20];
	char klan[20];
	int level;
	int power;	
};
typedef struct vanguard vr;
	
int main() 
{
	vr bb;
	strcpy(bb.nama,"Blaster Blade");
	strcpy(bb.klan,"Royal Paladin");
	bb.level = 2;
	bb.power = 9000;
	printf("Nama	: %s\n",bb.nama);
	printf("Klan	: %s\n",bb.klan);
	printf("Level	: %i\n",bb.level);
	printf("Power	: %i\n",bb.power);
	return 0;
}
