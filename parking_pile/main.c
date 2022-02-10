#include <stdio.h>
#include <stdlib.h>

typedef struct parking {
    int num;
    char nom[30];
    int nombre_place;
    char  nom_directeur[30];
}parking;


typedef struct celule{
    parking data;
    struct celule * next;
}celule;

typedef celule * pile;


parking sommet(pile p){
    return p->data;
}

void empiler(pile * p,parking pr){
    celule * b;
    b->data=pr;
    b->next=*p;
    *p=b;
}

celule *depiler(pile * p , parking pr){
        celule * temp;
        temp=*p;
        p=(*p)->next;
        free(temp);
        return temp;
}

void suprimmer_parking_s(pile * p){
    celule * temp=*p;
    while(temp!=NULL)
    {
        if(strcmp(temp->data.nom[0],"s"))
        depiler(p,temp->data);
        temp=temp->next;

    }

}










int main()
{
    printf("Hello world!\n");
    return 0;
}
