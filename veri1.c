#include <stdio.h>//tek y�nl� do�rusal ba�l� liste

struct node{ // yap� olu�turma
		int veri;
		struct node *pointer;
	};
int main(){
	
	struct node * bir;//d���m olu�turma
	bir= (struct node*)malloc(sizeof(struct node));//bellekte yer ay�rma
	
	struct node * iki;
	iki= (struct node*)malloc(sizeof(struct node));
	
	struct node * uc;
	uc= (struct node*)malloc(sizeof(struct node));
	
	struct node * dort;
	dort= (struct node*)malloc(sizeof(struct node));
	
	bir->veri=11; // veri giri�i yapt�k
	bir->pointer=iki; // bir sonraki d���m� g�sterdik
	
	iki->veri=22;
	iki->pointer=uc;
	
	uc->veri=33;
	uc->pointer=dort;
	
	dort->veri=44;
	dort->pointer=NULL;
	
	printf("%d %d %d %d",bir->veri,iki->veri,uc->veri,dort->veri);
	
	return 0;
}
