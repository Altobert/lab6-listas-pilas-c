#include <stdio.h>
#include <stdlib.h>
#include "TDAlista.h"

int main(){
    int nodos =0;
    int dato = 0;
    int indice=0;

    lista *l = nueva_lista();
    inserta_inicio(l, 100);    
    inserta_inicio(l, 200);

    nodos =  cuenta_nodos(l);
    imprime_lista(l);    
    printf("cantidad nodos: %d\n", nodos);
    dato =  busca_dato(l, 200);
    
    printf("dato: %d\n", dato);

    lista *lvacia1 = nueva_lista();
    lista *lvacia2 = nueva_lista();
    lista *lcontenido = nueva_lista();

    inserta_inicio(lcontenido, 5);    
    inserta_inicio(lcontenido, 16);
    inserta_inicio(lcontenido, 22);
    inserta_inicio(lcontenido, 3);
    inserta_inicio(lcontenido, 12);
    inserta_inicio(lcontenido, 7);
    
    
    indice =3;

    construir_lista(lcontenido, lvacia1, lvacia2, indice);

    return 0;
}
