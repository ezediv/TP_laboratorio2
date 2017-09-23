#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20
#include "fPersonas.h"

int main()
{
   int op=0;
   int posicion;
   int posBorrar;
   ePersona persona[TAM];
   int flag=1;
   inicioPersona(persona,TAM);// Inicia los estado en 0
   cargaPersona(persona);  //completa 5 estructuras con valores
   while (op!=5)
   {
    system("cls");
    printf("--Alumnos--\n\n1. Agregar una persona\n2. Borrar persona\n");
    printf("3. Imprimir lista ordenada alfabeticamente\n4. Imprimir grafico de edades\n5. Salir\n\nIngrese opcion: ");
    scanf("%d",&op);
    switch (op)
   {
       case 1:
               posicion=obtenerEspacio(persona,TAM);
               altaPersona(persona,posicion);
               flag=1;
       break;
       case 2:  posBorrar=posicionBorrar(persona,TAM);
                borrarPersona(persona,posBorrar);
       break;
       case 3: ordenarPersona(persona,TAM);
               mostrarPersona(persona,TAM);
       break;
       case 4: graficoPersona(persona,TAM,flag);
       break;
       case 5: system("cls");
               printf("ADIOS");
               break;
       default: printf("OPCION NO VALIDA");
       getch();
   }
   }
return 0;
}
