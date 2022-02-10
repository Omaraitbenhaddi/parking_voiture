#include <stdio.h>
#include <stdlib.h>


typedef struct voiture{
    char matricule;
    char marque;
    int kilometre;
    int etat;
}voiture;

typedef struct celule{
    voiture v;
    struct celule * next;

}celule;

typedef celule * pile;


voiture sommet(pile *p){
    if(*p!=NULL)
        return (*p)->v;
}

voiture empiler(pile *p, voiture v)
{
    celule *b;
    b=(celule *) malloc(sizeof(celule));
    b->v=v;
    b->next=NULL;
    b->next=*p;
    *p=b;
}


voiture depiler(pile *p,voiture v){
    celule * temp;
    temp=*p;
    *p=temp->next;
    free(temp);

}




















int main()
{
    printf("Hello world!\n");
    return 0;
}
