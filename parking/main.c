#include <stdio.h>
#include <stdlib.h>

typedef struct parking {
    int num;
    char nom[30];
    int nombre_place;
    char  nom_directeur[30];
}parking;

typedef struct celule {
    parking data;
    struct celule * next;

}celule;

typedef celule * liste;

void ajouterdebut(liste * debut,parking p){
    celule * b;
    b=(celule *) malloc(sizeof(celule));
    b->data=p;
    b->next=NULL;
    b->next=*debut;
    *debut=b;
}

void ajouteralafin(liste * debut , parking p){
    celule *b,*temp;
    b=(celule * )malloc(sizeof(celule));
    b->data=p;
    b->next=NULL;
    if(*debut==NULL)
        *debut=b;
    else{
        temp=*debut;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=b;
    }
}

void ajouteParking(liste * debut,parking p){
    celule *b,*temp,*prec;
    b=(celule *)malloc(sizeof(celule));
    b->data=p;
    b->next=NULL;
    if(*debut==NULL)
        *debut=b;
    else{
        temp=*debut;
        prec=NULL;
        while(temp->data.nom>p.nom){
            temp=temp->next;
            prec=temp;
        }

        b->next=temp;
        prec->next=b;

    }
}

void suprimer(liste * debut,char chaine[30]){
    celule * temp,*prec;
    if(*debut!=NULL){
        temp=debut;
        prec=NULL;
        while(temp!=NULL && strcmp(temp->data.nom,chaine)==0)
            {
                temp=temp->next;
                prec=temp;
            }
        if(temp!=NULL){
        prec->next=temp->next;
        free(temp);}

    }



}

void afficher(liste  debut ){
    celule * temp ;
    parking p;
    temp=debut;
    while(temp->next!=NULL){
        p=temp->data;
        printf("%d",p.num);
        printf("%d",p.nombre_place);
        printf("%s",p.nom);
        printf("%s",p.nom_directeur);
        temp=temp->next;

    }
}

void petit_parking(liste debut){
    while(debut!=NULL){
        if(debut->data.nombre_place<10)
        {
        printf("%d",debut->data.num);
        printf("%d",debut->data.nombre_place);
        printf("%s",debut->data.nom);
        printf("%s",debut->data.nom_directeur);
        }
        debut=debut->next;

        }


}


void grand_parking(liste debut){
    while(debut!=NULL){
        if(debut->data.nombre_place>10)
        {
        printf("%d",debut->data.num);
        printf("%d",debut->data.nombre_place);
        printf("%s",debut->data.nom);
        printf("%s",debut->data.nom_directeur);
        }
        debut=debut->next;

        }


}





int main()
{



}
