#include <stdio.h>
#include <string.h>

int main(){
	/*
	//Dizi olusturma
	int sayilar[]={15,25,18,54,84};
	
	for(int i=0;i<5;i++){
		printf("%d\n",sayilar[i]);
	}
	---------------------------------
	*/
	/*
	//Kullanicdan diziye metin alma
	int sayilar[20];
	int girilensayi;
	
	printf("Kac sayi girilecek:");
	scanf("%d",&girilensayi);
	for(int i=0;i<girilensayi;i++)
	{
		printf("\n Sayi %d: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	for(int j=0;j<girilensayi;j++){
		printf("Sayi %d: %d\n",j+1,sayilar[j]);
	}
	----------------------------------------
	*/
	/*
	char isim[]={"Mert"};
	for(int i=0;,i<10;i++){
		printf("%c",isim[i]);
	}
	*/
	/*
	char isim[]={"Mert"};
	char soyisim[]={"Guney"};
	printf(strcat(isim,soyisim));//strcat= iki metni birle�tirme
	int sayi=strlen(isim);//strlen kac harften olu�tugunu int turunde goster�r
	//printf("%d",sayi);
	if(strcmp(isim,soyisim)==0){//strcmp iki metini  kar��la�t�rma i�in
		printf("Kullanici bilgileri dogru");
	}
	else{
		printf("Kullanici bilgileri yanlis");
	}
	printf(strlwr(isim));//strlwr metindeki t�m harfleri kucuk harfe cevirir
	printf(strupr(isim));//strupr metindeki t�m harfleri Buyuk harfe cevirir
	printf(strrev(isim));//strrev metindeki t�m harfleri tersine cevirir
	*/
	char isim[50];
	char sifre[50];
	char isimveri[]={"mert"};
	char sifreveri[]={"123"};
	
	printf("Lutfen kullanici adi: ");
	scanf("%s",&isim);
	printf("Lutfen sifre: ");
	scanf("%s",&sifre);
	
	if(strcmp(isim,isimveri)==0 && strcmp(sifre,sifreveri)==0){
		printf("Hosgeldin %s",isimveri);
		
	}
	else{
		printf("Hatali giris");
	}
	
	
	
	
	
	
	
	return 0;
}
