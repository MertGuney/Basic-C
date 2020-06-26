#include <stdio.h>
#include <string.h>

int main()
{
	char isim[5]="Ali";
	int parola=1234;
	int bakiye=100;
	int secim;
	int yatirilacakPara;
	int cekilecekPara;
	
	char isimKontrol[10];
	int parolaKontrol;
	
	printf("Hosgeldiniz Lutfen Kullanici Adinizi Giriniz:");
	scanf("%s",&isimKontrol);
	printf("\nParola:");
	scanf("%d",&parolaKontrol);
	
	if(strcmp(isim,isimKontrol)==0 && parolaKontrol==parola){
		printf("Hosgeldiniz ali bey");
		printf("\nIslemlerden birini seciniz \n[1]-Para Yatir\n[2]-Para Cek\n[3]-Kullanici Bilgileri\nSeceneklerden birini seciniz.");
		scanf("%d",&secim);
		
		if(secim==1){
			printf("\n Kac para yatirmak istersiniz");
			scanf("%d",&yatirilacakPara);
			bakiye += yatirilacakPara;
			printf("Islem basarili \n yeni bakiyeniz:%d",bakiye);
		}
		else if (secim==2)
		{
			printf("\nCekilecek miktar giriniz:");
			scanf("%d",&cekilecekPara);
			if(cekilecekPara>bakiye)
			{
				printf("Bakiyenizden fazla tutar girdiniz.");
			}
			else{
			bakiye=bakiye-cekilecekPara;
			printf("Yeni bakiyeniz:%d",bakiye);
			}
		}
		else if (secim=3){
			printf("\nAdiniz:%s\nSifreniz:%d\nBakiyeniz:%d",isim,parola,bakiye);
		}
		else{
			printf("Yanlis secim yaptiniz lutfen tekrar deneyiniz.");
		}
	}
	else{
		printf("Kullanici adi ya da sifre yanlis");
	}
	
	
	
}
