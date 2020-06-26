#include <stdio.h>
#include <string.h>

void selam(){
	printf("Hosgeldiniz");
}
void kullanici(char isim[20]){
	
	printf("Kullanici adiniz : %s",isim);
}
void sirala(int a,int b){
	if(a<b){
		printf("%d<%d",a,b);
	}
	else if(b<a){
		printf("%d<%d",b,a);
	}
	else{
		printf("%d=%d",a,b);
	}
	
}
int toplama(int a,int b){
	int toplama = a+b;
	printf("%d",toplama);
}
int cikarma(int a,int b){
	int cikarma = a-b;
	printf("%d",cikarma);
}
int tekcift(int a){
	if(a%2==0){
		printf("Sayi cifttir");
	}
	else{
		printf("Sayi tektir");
	}
}
int ushesap(int a,int b){
	int cevap=1;
	for(int i=0;i<b;i++){
		cevap*=a;
	}
	printf("\n%d",cevap);
}
int sayitopla(int a,int b){
	int toplam = a+b;
	return toplam;	
}
int sayilarEsitmi(int a,int b){
	if(a==b){
		return 1;//true
	}
	else{
		return 0;//false
	}
}
int main(){
	/*
	char isim[20];
	printf("Kullanici adiniz: ");
	scanf("%s",&isim);
	kullanici(isim);
	//selam();
	*/
	/*
	int sayi1,sayi2;
	printf("Birinci sayi :");
	scanf("%d",&sayi1);
	printf("Ikinci sayi :");
	scanf("%d",&sayi2);
	sirala(sayi1,sayi2);
	*/
	/*
	int sayi1,sayi2;
	printf("Birinci sayi :");
	scanf("%d",&sayi1);
	printf("Ikinci sayi :");
	scanf("%d",&sayi2);
	toplama(sayi1,sayi2);
	printf("\n");
	cikarma(sayi1,sayi2);
	*/
	/*
	int sayi1;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi1);
	tekcift(sayi1);
	*/
	/*
	int sayi1;
	int us;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi1);
	printf("kacinci kuvveti alinicaktir :");
	scanf("%d",&us);
	ushesap(sayi1,us);
	*/
	/*
	int sayi1,sayi2;
	printf("Birinci sayi :");
	scanf("%d",&sayi1);
	printf("Ikinci sayi :");
	scanf("%d",&sayi2);
	sayitopla(sayi1,sayi2);
	int cevap=sayitopla(sayi1,sayi2);
	printf("%d",sayitopla(sayi1,sayi2));
	//printf("%d",cevap);
	*/
	int sayi1,sayi2;
	printf("Birinci sayi :");
	scanf("%d",&sayi1);
	printf("Ikinci sayi :");
	scanf("%d",&sayi2);
	
	bool deger =sayilarEsitmi(sayi1,sayi2);
	if(deger){
		printf("girilen sayilar esittir");
	}
	else{
		printf("girilen sayilar esit degil");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
