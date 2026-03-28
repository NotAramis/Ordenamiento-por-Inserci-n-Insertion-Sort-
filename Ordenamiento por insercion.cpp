#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int clave = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = clave; 
    }
}
void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int miArreglo[] = { 64, 25, 12, 22, 11 };

    int tamano = sizeof(miArreglo) / sizeof(miArreglo[0]);

    cout << "Arreglo original desordenado: \n";
    imprimirArreglo(miArreglo, tamano);

    insertionSort(miArreglo, tamano);

    cout << "\nArreglo ordenado por Insercion: \n";
    imprimirArreglo(miArreglo, tamano);

    return 0; 
}