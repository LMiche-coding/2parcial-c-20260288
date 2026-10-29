#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX_PRODUCTOS 100
#define MAX_SUCURSALLES 4 
#define STOCK_MINIMO 10 

typedef struct 
{
    int codigo; 
    char nombre[50]; 
    char categoria[50]; 
    float precio; 
    int stock[MAX_SUCURSALLES];
    int stockTotal;
    char estado[20]
} Producto;

void registrarProducto(Producto inventario[], int *cantidad); 

int main()
{

    return 0;
}

