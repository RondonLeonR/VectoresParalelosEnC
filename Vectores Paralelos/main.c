#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5

void MostrarAlumno(char [][50],int [],int [],float [],int [],int );
void cargarAlumno(char [][50],int [],int [],float [],int [],int );
int buscarUnLugar(int legajo[], int);

int main()
{

    char nombre[TAMANIO][50]={"Juan","Maria","Alfredo","Jose","Lili"};
    int nota1[TAMANIO]={0};
    int nota2[TAMANIO]={0};
    float promedio[TAMANIO]={0};
    int legajo[TAMANIO]={0};

    cargarAlumno(nombre, nota1, nota2, promedio, legajo, TAMANIO);
    MostrarAlumno(nombre, nota1, nota2, promedio, legajo, TAMANIO);


    return 0;
}

void MostrarAlumno(char nombre[][50],int note1[],int note2[],float promedios[],int legajo[],int largo)
{
    int i;
    for(i=0;i<largo;i++)
    {
        printf("\nLegajo: %d\nNombre: %s\nNota 1: %d\nNota 2: %d\nPromedio: %.2f\n",legajo[i],nombre[i],note1[i],note2[i],promedios[i]);

    }

}

void cargarAlumno(char nombre[][50],int note1[],int note2[],float promedios[],int legajo[],int largo)
{
    int indice;
    indice = buscarUnLugar(legajo, largo);
    legajo[indice]=666;


}

int buscarUnLugar(int legajo[], int largo)
{
    int i;
    int indiceRetornado=-1;

    for(i=0;i<largo;i++)
    {
        if(legajo[i]==0)
        {
            indiceRetornado=i;
            break;
        }
    }
    return indiceRetornado;


}
