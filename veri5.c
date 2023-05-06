#include <stdio.h>//baþa eleman ekleme
#include <stdlib.h>

struct node{
	
	int data;
	struct node * next;
	
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* q = NULL;

void basaekle(int veri){
	struct node* basagelecek =(struct node*)malloc(sizeof(struct node));
	basagelecek->data = veri;
	basagelecek->next = start;
	start = basagelecek;
	
}
void yazdir(){ //yazdýrma fix
	q = start;
	while(q->next!= NULL){
		printf("%d  ",q->data);//buradaki dögüde son deðeri yazdýrmaz
		q= q->next;
	}
	printf("%d",q->data);// o yuzden burada en son elemaný yazdýrýrýz
}

int main(){
	int adet=0;
	int sayi;
	while(adet!=5){
		printf("  Bir sayi giriniz:");
		scanf("%d",&sayi);
		basaekle(sayi);
		yazdir();
		adet++;
	}
	return 0;
}
