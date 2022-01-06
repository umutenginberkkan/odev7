

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


	int döndürücü(int *);
int main(){

	srand(time(NULL));
	int a[7];
	for(int k=0;k<7;k++){a[k]=rand()%51;printf("dizinin %d elemanı = %d\n",k+1,a[k]);}

	printf("büyük eleman = %d",döndürücü(a));


}
int döndürücü(int *c ){
	int sayac=0;
	int buyuk=0;
	if(sayac<7){
		sayac++;
		if(c[0]>buyuk){buyuk=c[0];}


		döndürücü(c+4);
	}else{

		printf("en büyük eleman =%d",buyuk);


	}


	return buyuk;
}
