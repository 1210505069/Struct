#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrbilgi {
    char isim[100];
    char soyisim[100];
    char fakulte[100];
    char bolum[100];
    int numara;
    char adres[200];
};//temel struct tanimalinr

int main(int argc, char *argv[]) {
	
	struct ogrbilgi besligrup[5];
	int s = 0;
	
	for(s; s<5; s++)
	{
		printf("%d. Ogrencinin bilgilerini giriniz:\n", s+1);
        printf("Isim: ");
        scanf("%s", besligrup[s].isim);
        printf("Soyisim: ");
        scanf("%s", besligrup[s].soyisim);
        printf("Fakulte: ");
        scanf("%s", besligrup[s].fakulte);
        printf("Bolum: ");
        scanf("%s", besligrup[s].bolum);
        printf("Numara: ");
        scanf("%d", &besligrup[s].numara);
        printf("Adres: ");
        scanf("%s", besligrup[s].adres);
	}//ogrenci bilgileri kullanicidan alinir
	
	s=0;
    for (s; s < 5; s++) 
	{
        printf("\n%d Ogrencinin bilgileri:\n", s+1);
        printf("Isim: %s\n", besligrup[s].isim);
        printf("Soyisim: %s\n", besligrup[s].soyisim);
        printf("Fakulte: %s\n", besligrup[s].fakulte);
        printf("Bolum: %s\n", besligrup[s].bolum);
        printf("Numara: %d\n", besligrup[s].numara);
        printf("Adres: %s\n", besligrup[s].adres);
    }//ogrenci bilgileri gosterilir
    
	
	
	return 0;
}
