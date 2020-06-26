#include <stdio.h>
#include <string.h>
//class yapýsý
struct arabalar{
char marka[20];
char model[20];
int yil;
int beygir;
};
struct calisanlar{
	char isim[20];
	char soyisim[20];
	int maas;
};
struct detay{
	char renk[20];
	char boyut[20];
	char dipnot[20];
};
struct urunler{
	char isim[20];
	int sayi;
	struct detay bilgi;
};
struct ogrenciler{
	char isim[20];
	char soyisim[20];
	int dogumyili;
	int no;
};
void bilgiler(struct ogrenciler bilgi){
	printf("Ogrenci Ad:%s\nOGrenci Soyad:%s\nOgrenci Dogum yili:%d\nOgrenci No:%d",bilgi.isim,bilgi.soyisim,bilgi.dogumyili,bilgi.no);
	
}
struct ogrenciler ogrencikayit(){
	int i=1;
	struct ogrenciler kayit;
	printf("Bilgileri giriniz");
	printf("\nAd:");
	scanf("%s",&kayit.isim);
	printf("\nSoyad:");
	scanf("%s",&kayit.soyisim);
	printf("\nDogum Gunu:");
	scanf("%d",&kayit.dogumyili);
	printf("\nNumarasi:");
	scanf("%d",&kayit.no);
	return kayit;

}

int main(){
	/*
	struct arabalar araba1={"Alfa Romeo","4C",2016,240};
	struct arabalar araba2={"Aston Martin","DB7",2019,420};
	printf("------Arabalar------\n%s-%s-%d-%d",araba1.marka,araba1.model,araba1.yil,araba1.beygir);
	printf("\n%s-%s-%d-%d",araba2.marka,araba2.model,araba2.yil,araba2.beygir);
	*/
	/*
	struct calisanlar calisan[4];
	int i=1;
	for(i=1;i<5;i++)
	{
		printf("Lutfen %d ninci calisanin bilgilerini giriniz : \n",i);
		printf("Isim:");
		scanf("%s",&calisan[i].isim);
		printf("Soyisim:");
		scanf("%s",&calisan[i].soyisim);
		printf("Maas:");
		scanf("%d",&calisan[i].maas);
	}
	for(i=1;i<5;i++){
		printf("\n %s %s - %d \n",calisan[i].isim,calisan[i].soyisim,calisan[i].maas);
	}
	*/
	/*
	struct urunler urun1;
	strcpy(urun1.isim,"Televizyon");
	urun1.sayi=250;
	strcpy(urun1.bilgi.renk,"kirmizi");
	strcpy(urun1.bilgi.boyut,"1500x2000");
	strcpy(urun1.bilgi.dipnot,"sahibinden satilik");
	
	printf("Urun Bilgileri\n");
	printf("Urun adi:%s\nUrun renk :%s\nUrun Boyut:%s\nUrun Sayi:%d\nUrun Not:%s",urun1.isim,urun1.bilgi,urun1.bilgi.boyut,urun1.sayi,urun1.bilgi.dipnot);
	*/
	
	struct ogrenciler ogrenci1=ogrencikayit();
	bilgiler(ogrenci1);
	struct ogrenciler ogrenci2=ogrencikayit();
	bilgiler(ogrenci2);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
