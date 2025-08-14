#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int size;
    int *vetor;

}Vector;

void inicializa_vector(Vector *vetor){
    vetor->size=0;
}

void push_back(Vector *v,int x){

    if(v->size==0) v->vetor = (int*)malloc(sizeof(int));
    else v->vetor = (int*)realloc(v->vetor,sizeof(int)*(v->size+1));

    v->vetor[(v->size)++] = x;
}

int main(){

    Vector vet;

    inicializa_vector(&vet);

    for(int i=0;i<=10;i++){
        push_back(&vet, i);
    }

    printf("Vetor: ");
    for(int i=0;i<vet.size;i++){
        printf("%d ", vet.vetor[i]);
    }
    printf("\n");


    return 0;

}

