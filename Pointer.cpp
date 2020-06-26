#include <stdio.h>
#include <string.h>

int main(){
	/*
	int sayi1=15;
	int sayi2=25;
	char kelime='a';
	int *pointer1,*pointer2;
	pointer1=&sayi1;
	pointer2=&sayi2;
	//pointer baþka bir deðiþkenin bellekteki adresine ulaþabilir ve atanan degerine müdahale edebilir.
	
	
	
	pointer1 +=1;
	printf("sayi1 in degeri : %d\nSayi1 in bellekteki adresi(hektadecimal cinsinden):%x\n",*pointer1,&pointer1);
	printf("sayi2 in degeri : %d\nSayi2 in bellekteki adresi(hektadecimal cinsinden):%x\n",*pointer2,&pointer2);
	//printf("kelime in degeri : %c\nkelime in bellekteki adresi(hektadecimal cinsinden):%x\n",kelime,&kelime,&kelime);
	//printf("pointer1 bellekte kapladigi yer:%x\n",&pointer1);
	//printf("pointer2 bellekte kapladigi yer:%x\n",&pointer2);
	*/
	/*
	char kelimeler[20];
	
	int *pointerkelime;
	
	pointerkelime=&kelimeler[0];
	printf("%x",pointerkelime);
	*/
	int soru;
	printf("lutfen girilecek sayi miktari belirtiniz:");
	scanf("%d",&soru);
	
	int sayilar[soru];
	int i=0;
	for(i=0;i<soru;i++){
		printf("Lutfen sayi %d giriniz :",i);
		scanf("%d",&sayilar[i]);
	}
	int *pointer;
	for(i=0;i<soru;i++){
		pointer=&sayilar[i];
		printf("Sayilar %d bellekteki yeri : %x",sayilar[i],pointer);
	}
	
	return 0;
}
