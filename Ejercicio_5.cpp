//Estudiante: Cifuentes González Elian
//Fecha de entrega: 07/07/2024
//Curso: 1ro de TI

//5) Diseñe la función que encuentre el elemento menor de un vector de enteros

#include <iostream>

using namespace std;

// Función que encuentra el elemento menor de un vector de enteros
int EncontrarMenor(int vector[], int total) {
    int menor = vector[0]; 
    for (int i = 1; i < total; i++) {
        if (vector[i] < menor) {
            menor = vector[i]; 
        }
    }
    return menor;
}

// Función que imprime los elementos de un vector de enteros
void ImprimirVector(int vector[], int total) {
    for (int i = 0; i < total; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {

    int vector1[] = {15, 62, 11, 4, 8, 1, 9};
    int total1 = sizeof(vector1) / sizeof(vector1[0]); 

    cout << "Vector Nº1: ";
    ImprimirVector(vector1, total1); 

    int menor1 = EncontrarMenor(vector1, total1); 
    cout << "El elemento menor del Vector Nº1 es: " << menor1 << endl;

    int vector2[] = {29, 34, 11, 123, 22, 42, 17};
    int total2 = sizeof(vector2) / sizeof(vector2[0]); 

    cout << endl << "Vector Nº2: ";
    ImprimirVector(vector2, total2); 

    int menor2 = EncontrarMenor(vector2, total2); 
    cout << "El elemento menor del Vector Nº2 es: " << menor2 << endl;

    return 0;
}