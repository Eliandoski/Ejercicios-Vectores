//Estudiante: Cifuentes González Elian
//Fecha de entrega: 07/07/2024
//Curso: 1ro de TI

/*3) Se tiene un vector de N nombres de personas. Diseñe la función que ordena este vector usando el 
algoritmo de ordenación secuencial*/

#include <iostream>
#include <string>

using namespace std;

// Función que ordena un vector de nombres usando el algoritmo de ordenación por selección
void OrdenarPorSeleccion(string nombres[], int total) {
    for (int i = 0; i < total - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < total; j++) {
            if (nombres[j] < nombres[minIndex]) {
                minIndex = j;
            }
        }
        string temp = nombres[i];
        nombres[i] = nombres[minIndex];
        nombres[minIndex] = temp;
    }
}

// Función que imprime los elementos de un vector de nombres
void ImprimirNombres(string nombres[], int total) {
    for (int i = 0; i < total; i++) {
        cout << nombres[i] << endl;
    }
}

int main() {
    string nombres[] = {"Gisel", "Maria", "Pedro", "Julian", "Ban", "Adrian", "Pepe"};
    int total = sizeof(nombres) / sizeof(nombres[0]); 

    cout << "Vector Nombres Originales:" << endl;
    ImprimirNombres(nombres, total); 

    OrdenarPorSeleccion(nombres, total); 

    cout << endl << "Vector Nombres Ordenados:" << endl;
    ImprimirNombres(nombres, total); 

    return 0;
}