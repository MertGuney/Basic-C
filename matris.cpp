#include <stdio.h>
#include <string.h>

int main(){
	/*
	int matris[2][2]={{1,2}{3,4}};//ilk[2] sütün sayısı ikinci[2]satır sayısını belirtir.
	//aciklaması
	matris[0][0]=1;
	matris[0][1]=2;
	matris[1][0]=3;
	matris[1][1]=4;
	--------------------
	*/
	/*
	int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	printf("%d",matris[1][2]);
	printf("%d",matris[3][1]);
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			printf("%d/",matris[i][j]);
		}
		printf("\n");
	}
	*/
	
	int matris[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Su an %d Sutunundasiniz\n  satirini doldurunuz: ",i,j);
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",matris[i][j]);
			}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
