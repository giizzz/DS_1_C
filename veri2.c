#include <stdio.h>//sona eleman düðüm ekleme tek yönlü doðrusal
#include <stdlib.h>
struct node{ // yapý oluþturma
		int veri;
		struct node *pointer;
	};
	
struct node * bas = NULL;
struct node * gecici = NULL;

void sonaekle(int sayi){
	
	struct node * eklenecek;
	eklenecek = (struct node *)malloc(sizeof(struct node));
	eklenecek->veri=sayi;
	eklenecek->pointer=NULL;
	
	if(bas==NULL){
		bas= eklenecek;
	}
	else{
		gecici=bas;
		while(gecici->pointer!=NULL){
			gecici=gecici->pointer;
		}
		gecici->pointer=eklenecek;
	}
}
void yazdir(){
	gecici = bas;
	while(gecici->pointer!=NULL){
		printf("%d ",gecici->veri);
		gecici=gecici->pointer;
	}
	printf("%d ",gecici->veri);
}

int main(){
	int adet =0;
	while(adet!=5){
		int sayi;
		printf("Bir sayi giriniz:");
		scanf("%d",&sayi);
		sonaekle(sayi);
		adet++;
}
	yazdir();

	return 0;
}
