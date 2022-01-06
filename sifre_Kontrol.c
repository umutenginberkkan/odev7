

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 8
						/*SIFRE  DENETLEYICI*/
						/*1 buyuk harf 1 kucuk 1 rakam aranır*/
	int sifre_Denetleyici( char a[]);
int main(void) {
			 char sifre[8];
	printf("%s\n\n\t\t%s\n\n%s\n%s\n%s\n\n\n",
			"Klavyeden şifre oluşturunuz",
			"***Dikkat***",
			"!!! 1 Büyük Harf 1 Küçük Harf 1 Rakam içermelidir !!!",
			"!!!Şifreniz en fazla 7 karakter uzunluğunda olabilir!!!",
			"!!! Şifrede Türkçe karakter kullanmayınız");

		scanf("%s",sifre);

		if(sifre_Denetleyici(sifre) == 2){printf("\n!!! Şifreniz kullanıma uygun ve güvenlidir !!!\n");}
		else if(sifre_Denetleyici(sifre) == 1){printf("\n!!! Şifreniz Uygun Değildir !!!\n");}
}
int sifre_Denetleyici( char  girdi[]){

	char sb,sk,ss;
	sb=0; sk=0; ss=0;
	size_t t = 0;
	while(girdi[t]!= "\n"&&t<7){
		if(girdi[t]>='A'&& girdi[t]<='Z') sb++;
		if(girdi[t]>='a'&& girdi[t]<='z') sk++;
		if(girdi[t]>='1'&& girdi[t]<='9') ss++;
		t++;
	}
	if(sk==0||sb==0||ss==0){ return 1;} else return 2;

}






