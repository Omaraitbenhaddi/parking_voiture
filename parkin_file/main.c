#include <stdio.h>
#include <stdlib.h>



typedef struct parking {
    int num;
    char nom[30];
    int nombre_place;
    char  nom_directeur[30];
    struct parking * next ;
}parking;

typedef struct file{
    parking * tete;
    parking * qeu;

}file;

int est_vide(file f){
        if(f.tete=NULL)
            return 1;
        return 0;
}

parking  sommet(file *f){
        if(f!=NULL){
            return *(f->tete);
        }
}

file enfiler(file f,parking pr){
    pr.next=NULL;
    if(f.qeu==NULL){
        f.tete=&pr;
        f.qeu=&pr;
    }
    else{
        f.qeu->next=&pr;
    f.qeu=&pr;
    }
    return f;

}



file defiler(file f){
    parking *temp;
    if(f.tete!=NULL){
        temp=f.tete;
    f.tete=f.tete->next;
    free(temp);
    }
    return f;




}















int main()
{
    printf("Hello world!\n");
    return 0;
}
