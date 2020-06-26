#include <stdio.h>
#include <string.h>
// yarismaciya 3 hak ver 3 hata yaparsa yarismayi bitir
void baslangic(){
	printf("Bilgi yarismasina hosgeldiniz\n""Yarisma puan sistemlidir\n""Lutfen kullanici adinizi dogru giriniz uye degilseniz uye olunuz.");
}

int GirisSecim(){
	int secim;
	printf("Lutfen bir secenegi seciniz\n[1]-Giris\n[2]-Kayit ol\n");
	scanf("%d",&secim);
	return secim;
}
int girisyap(char isim[100],char sifre[100]){
	char isimveri[100];
	char sifreveri[100];
	bool kontrol=false;
	while(kontrol==false){
	printf("Kullanici adiniz : ");
	scanf("%s",&isimveri);
	printf("\nKullanici sifreniz : ");
	scanf("%s",&sifreveri);
	if(strcmp(isim,isimveri)==0&&strcmp(sifre,sifreveri)==0){
		printf("sisteme hosgeldiniz");
		kontrol=true;
	}
	else{
		printf("Hatali giris\n");
	}
	}
}
int kayitol(){
	char isim[100];
	char sifre[100];
	printf("Kullanici Adiniz : ");
	scanf("%s",&isim);
	printf("Kullanici sifreniz : ");
	scanf("%s",&sifre);
	printf("Kayit basarili\nGiris ekranina yonlerdiriliyorsunuz\n");
	girisyap(isim,sifre);
	}
int yarisma(){
	int puan=0;
	int can=3;
	char cevap[2];
	while(can!=0){
	if(puan==0){
	printf("Basliyoruz\n");
	printf("[Soru-1]Hangisi TR Baskentidir?\na)Ankara\nb)Istanbul\nc)Izmir\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"a")==0){
		printf("\nDogru cevap");
		puan+=10;
		printf("\nPuaniniz:%d",puan);
	}
	else{
		printf("Sorunun cevabý a sikki\n");
		printf("Puaniniz %d",puan);
		can=can-1;
		printf("caniniz : %d",can);
		
	}
		}
		if(puan==10){
	printf("\n[Soru-2]Hangisi Ingiltere Baskentidir?\na)Ankara\nb)Londra\nc)Hongkong\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0){
		printf("\nDogru cevap");
		puan+=10;
		printf("\nPuaniniz:%d",puan);
	}
	else{
		printf("Sorunun cevabý b sikki\n");
		printf("Puaniniz %d",puan);
		can=can-1;
		printf("caniniz : %d",can,"\n");
		
	}
		}
		if(puan==20){
	printf("\n[Soru-3]Hangisi Ingiltere Baskentidir?\na)Ankara\nb)Londra\nc)Hongkong\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0){
		printf("\nDogru cevap");
		puan+=10;
		printf("\nPuaniniz:%d",puan);
		can=0;
	}
	else{
		printf("Sorunun cevabý b sikki\n");
		printf("Puaniniz %d",puan);
		can=can-1;
		printf("caniniz : %d",can,"\n");
		
	}
		}
		return puan;
		}
}
int yarismabitis(int puan){
	printf("Yarisma bitmistir \n Guncel skorunuz : %d",puan);
}

int main(){
	char isim[100]="Mehmet";
	char sifre[100]="123";
	baslangic();
	int secim=GirisSecim();
	
	if(secim==1){
		girisyap(isim,sifre);
	}
	else if(secim==2){
		kayitol();
	}
	printf("\n");
	int skor = yarisma();
	yarismabitis(skor);
	
	
	
	
	return 0;
}
