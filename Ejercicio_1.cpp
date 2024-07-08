//Estudiante: Cifuentes González Elian
//Fecha de entrega: 07/07/2024
//Curso: 1ro de TI

/*1) Función de búsqueda de elementos en un vector de enteros: versión 1(devuelve true/false) 
y versión 2(devuelve posición del elemento encontrado)*/

#include <iostream>

using namespace std;

// Función que busca un elemento en el vector, devuelve true si lo encuentra y false si no lo encuentra
bool busqueda(int vector[], int total, int elemento)
{
    for (int k = 0; k < total; k++)
    {
        if (vector[k] == elemento)
            return true;
    }
    return false;
}

// Función que busca un elemento en el vector y devuelve su posición. 
int busquedav2(int vector[], int total, int elemento)
{
    for (int k = 0; k < total; k++)
    {
        if (vector[k] == elemento)
            return k;
    }
    return -1;
}

int main(){
    const int max = 10;
    int vector[max] = {4, 2, 32, 45, 14, 15, 1, 12, 19, 44}; 


    int x = 1;
    bool res = busqueda(vector, max, x);
    if (res)
        cout << endl << "El elemento " << x << " si existe";
    else
        cout << endl << "El elemento " << x << " no existe";

    x = 234;
    if (busqueda(vector, max, x))
        cout << endl << "El elemento " << x << " si existe";
    else
        cout << endl << "El elemento " << x << " no existe";

    x = 44;
    int pos = busquedav2(vector, max, x);
    if (pos >= 0)
        cout << endl << "Elemento " << vector[pos] << " encontrado en la posicion " << pos;
    else
        cout << endl << "El elemento " << x << " no existe en el vector";
    
    return 0;
}