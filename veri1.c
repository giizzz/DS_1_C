#include <stdio.h>//tek yönlü doğrusal bağlı liste

struct node{ // yapı oluşturma
		int veri;
		struct node *pointer;
	};
int main(){
	
	struct node * bir;//düğüm oluşturma
	bir= (struct node*)malloc(sizeof(struct node));//bellekte yer ayırma
	
	struct node * iki;
	iki= (struct node*)malloc(sizeof(struct node));
	
	struct node * uc;
	uc= (struct node*)malloc(sizeof(struct node));
	
	struct node * dort;
	dort= (struct node*)malloc(sizeof(struct node));
	
	bir->veri=11; // veri girişi yaptık
	bir->pointer=iki; // bir sonraki düğümü gösterdik
	
	iki->veri=22;
	iki->pointer=uc;
	
	uc->veri=33;
	uc->pointer=dort;
	
	dort->veri=44;
	dort->pointer=NULL;
	
	printf("%d %d %d %d",bir->veri,iki->veri,uc->veri,dort->veri);
	
	return 0;
}
