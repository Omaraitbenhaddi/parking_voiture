#include <stdio.h>
#include <stdlib.h>


typedef struct voiture{
    char matricule;
    char marque;
    int kilometre;
    int etat;
    struct voiture * next ;
}voiture;

typedef struct file
{
    voiture * first ;
    voiture * last;
}file;


voiture sommet(file f){
        return *(f.first);
}

file enfiler(file f, voiture v){
    v.next=NULL;
    if(f.first==NULL){
        f.first=&v;
        f.last=&v;
    }
    else{
        f.last->next=&v;
    f.last=&v;

    }
    return f;
}

file defiler(file f)
{   voiture * temp;
    temp=f.first;
    f.first=f.first->next;
    free(temp);
}





int main()
{
    printf("Hello world!\n");
    return 0;
}
