#include <stdio.h>

int main(){
	/*
	int sayi;
	int i=1;
	int faktoriyel=1;
	int sonuc;
	int toplam=0;
	
	//Faktoriyel hesapla
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	 while(i<=sayi){
	 	faktoriyel=faktoriyel*i;
	 	i++;
	 }
	 printf("\nsonuc=%d",faktoriyel);
	 ----------------------------------------------
	 //Girilen degere kadar olan sayilari topla
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	while(i<=sayi)
	{
		printf("Degerler:%d\n",i);
		toplam += i;
		i++;
	}
	printf("\nToplam =%d",toplam);
	----------------------------------------------------
	//basamak degerleri topla
	
	int sayi,toplam=0,kalan;
	scanf("%d",&sayi);
	
	while(sayi!=0)
	{
	kalan=sayi%10;
	toplam=toplam+kalan;
	sayi=sayi/10;
	}
	printf("\nBasamak  Toplami:%d",toplam);
	--------------------------------------------------------
	*/
	//Sayýnýn tersten yazilisi
	
	 int sayi,ters;
	 scanf("%d",&sayi);
	 
	 while(sayi!=0)
	 {
	 	ters=ters*10;
	 	ters=ters+sayi%10;
	 	sayi=sayi/10;
	 }
	 printf("\nGirdiginiz sayinin tersi = %d",ters);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
