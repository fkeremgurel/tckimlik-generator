#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int	toplam=0;
int	toplam1=0;
int	toplam3=0;

	srand(time(NULL));
	int dizi[10];
	int i, temp;
	for (i=0;i<10;i++)
	{
		do
		{
			dizi[i] = rand() % 10;	
		}while(dizi[0]==0);
	}
	
for (i=1;i<8;i=i+2)
{
toplam+=dizi[i];//tc nin 1,3,5,7,9, basamaklarý	
}	
toplam=toplam*7;
	
for(i=0;i<9;i=i+2)
{
	toplam1=toplam1+dizi[i];//tc de  2 4 6 8 basamaklari
}

dizi[9]=(toplam-toplam1)%10;

for (i=0;i<=9;i++)
{
	toplam3+=dizi[i];	
}
dizi[10]=toplam3%10;

for (i=0;i<11;i++)
{
	printf("%d",dizi[i]);
}




	return 0;
}
