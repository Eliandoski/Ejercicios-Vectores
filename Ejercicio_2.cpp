//Estudiante: Cifuentes González Elian
//Fecha de entrega: 07/07/2024
//Curso: 1ro de TI

//2) Función que invierte los elementos de un vector

#include<iostream>
using namespace std;

// Función que invierte los elementos de un vector
void Invertir( int x[],int total){
    int k = 0;
    int j = total - 1;
    while(k<j){
        int aux = x [k];
        x[k]= x[j];
        x[j] = aux;
        k++;
        j--;
    }
}

// Función que imprime los elementos de un vector
void Imprimir(int x[], int total) {
    for (int i = 0; i < total; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {

    int x1[] = {10, 6, 34, 4, 2, 7, 15};
    int total1 = sizeof(x1) / sizeof(x1[0]); 
    cout << endl << "|Primer Vector|";    
    cout << endl << "Vector Original: ";
    Imprimir(x1, total1);
    Invertir(x1, total1); 
    cout << "Vector Invertido: ";
    Imprimir(x1, total1); 

    int x2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int total2 = sizeof(x2) / sizeof(x2[0]); 
    cout<<endl<<endl<<"|Segundo Vector|";    
    cout <<endl<< "Vector Original: ";
    Imprimir(x2, total2); 
    Invertir(x2, total2); 
    cout << "Vector Invertido: ";
    Imprimir(x2, total2); 
    
    return 0;
}