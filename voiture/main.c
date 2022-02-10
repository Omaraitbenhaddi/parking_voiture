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

typedef celule * liste;


void ajouter(liste * l , voiture voi){
    celule * b,*temp,*prec;
    b=(celule * )malloc(sizeof(celule));
    b->v=voi;
    b->next=NULL;
    if(l==NULL){
        *l=b;
    }else{
        temp=*l;
        prec=NULL;
        while(strcmp(temp->v.marque,voi.marque)<0 && temp!=NULL){
            temp=temp->next;
            prec=temp;
        }
        if(temp!=NULL){
            prec->next=b;
            b->next=temp;

        }
    }

}


void afficher(liste debut){
    celule * temp;
    temp=debut;
    voiture data;
    while(temp!=NULL)
    {
        data=temp->v;
        printf("%s %s %d %d",data.matricule,data.marque,data.kilometre,data.etat);
        temp=temp->next;
    }


}


void suprimer(liste * debut , char chaine){
    celule * temp,*prec;
    temp=*debut;
    if(temp!=NULL){
        if(strcmp(temp->v.marque,chaine)==0)
            *debut=NULL;
        prec=temp;
        temp=temp->next;
    while(temp!=NULL){
        if(strcmp(temp->v.marque,chaine)==0){
                prec->next=temp->next;
                free(temp);

        }
    }

    }
}









int main()
{
    printf("Hello world!\n");
    return 0;
}
