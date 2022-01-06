

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>




int main(){

	int sayi; char dizi[18]=0;size_t a=0;int toplam=0;
	printf("%s\n","Bir doğal sayı giriniz");
		while(a<18){
			dizi[a]=getch();
			a++;
		}
	printf("Bir kere daha giriniz");

	 	 scanf("%d",&sayi);

	 	 a=0;

	 	while(a<18){
	 				toplam+= dizi[a];
	 			}
	 	if(toplam==sayi){printf("Bu sayı armstrongtur");}else{printf("Bu sayı armstrong değildir");}

}

