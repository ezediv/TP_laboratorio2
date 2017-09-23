#include "fPersonas.h"

void altaPersona(ePersona persona[],int posicion)
{
    if (posicion!=-1)
    {
           persona[posicion].estado=1;
           printf("ingrese dni: ");
           scanf("%d",&persona[posicion].dni);
           printf("ingrese nombre: ");
           scanf("%s",&persona[posicion].nombre);
           printf("ingrese edad: ");
           scanf("%d",&persona[posicion].edad);
    }
     else
        {
            printf("LISTA LLENA!");
            getche();
        }

}

void inicioPersona(ePersona persona[],int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        persona[i].estado=0;
    }
}

void borrarPersona(ePersona persona[],int pos)
{
   int op;
   if (pos!=-1)
    {
        printf("\nDesea eliminar a: %s - %d - %d\n1. SI\n2. NO\n",persona[pos].nombre,persona[pos].dni,persona[pos].edad);
        scanf("%d",&op);
        if (op==1)
        {
            persona[pos].estado=0;
        }
        else if(op==2)
        {
            printf("\nPERSONA NO REMOVIDA");
            getche();
        }


    }
    else
    {
        printf("\nPERSONA NO ENCONTRADA");
        getche();
    }
}
void mostrarPersona(ePersona persona[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(persona[i].estado==1)
        {
        printf("\nDni: %d - Nombre: %s - Edad: %d",persona[i].dni,persona[i].nombre,persona[i].edad);
        }
    }
    getch();
}

void ordenarPersona(ePersona persona[], int tam)
{

    int i, j;
    ePersona aux;
    char auxString[50];
    for(i=0; i<tam-1; i++)
    {
        if(persona[i].estado!=0)
        {
            for(j=i+1; j<tam; j++)
            {
                if(persona[j].estado!=0)
                {
                    if(strcmp(persona[i].nombre, persona[j].nombre) > 0)
                    {
                        aux=persona[i];
                        persona[i]=persona[j];
                        persona[j]=aux;
                    }

                }
            }
        }
    }

}

void graficoPersona(ePersona persona[], int tam,int flag)
{
    int i;
    int contMenor=tam-1;
    int contJoven=tam-1;
    int contAdulto=tam-1;
    char menor[tam];
    char joven[tam];
    char adulto[tam];

    if (flag==0)
    {
        system("cls");
        printf("**Base de datos vacio!**\nPresione cualquier tecla para continuar");
        getche();
    }
    else
    {


    for (i=0;i<tam;i++)
    {
        menor[i]=' ';
        joven[i]=' ';
        adulto[i]=' ';
    }

     for (i=0;i<tam;i++)
    {
        if (persona[i].estado!=0)
        {

        if (persona[i].edad <18)
        {
            menor[contMenor]=219;
            contMenor--;
        }
        else if (persona[i].edad>35)
            {
                adulto[contAdulto]=219;
                contAdulto--;

            }
            else
            {
                joven[contJoven]=219;
                contJoven--;
            }
    }

    }



    for (i=0;i<tam;i++)
    {
        printf("\n      %c       %c       %c",menor[i],joven[i],adulto[i]);
    }
    printf("\n\n     <18    19-35    >35 ");
    getch();
    }
}

int obtenerEspacio(ePersona persona[],int tam)
{
    int i;
    int espacio;
    for(i=0;i<tam;i++)
    {
        if (persona[i].estado==0)
        {
        persona[i].estado=1;
        espacio=i;
        break;
    }else if(i==tam-1)
    {
        espacio=-1;
    }

    }
return espacio;
}

int posicionBorrar(ePersona persona[],int tam)
{
    int i;
    int auxdni;
    int posB=-1;
    printf("Ingrese DNI: ");
    scanf("%d",&auxdni);
    for(i=0;i<tam;i++)
    {
        if(persona[i].estado==1)
        {
            if (auxdni==persona[i].dni)
            {
                posB=i;
                break;
            }
        }

    }
    return posB;
}

void cargaPersona(ePersona persona[])
{
    char nombre[][30]={"eze","rob","esteban","juan","julio"};
    int edad[]={25,30,40,12,21};
    int dni[]={37,40,20,1,2};
    int i;
    int estado[]={1,1,1,1,1};
    for (i=0;i<5;i++)
    {
        persona[i].dni=dni[i];
        persona[i].edad=edad[i];
        strcpy(persona[i].nombre,nombre[i]);
        persona[i].estado=estado[i];
    }

}

