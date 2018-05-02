#include <iostream>

using namespace std;
void insertionSort(int arr[], int tam)
{
   int* inicio, elementoComparar, *listaOrdenada;
   for (inicio = arr+1; inicio < arr+tam; inicio++)
   {
       elementoComparar = *inicio;
       listaOrdenada = inicio-1;

       while (elementoComparar >= 0 && *listaOrdenada > elementoComparar)
       {
           *(listaOrdenada+1) = *listaOrdenada;
           listaOrdenada--;
       }
       *(listaOrdenada+1) = elementoComparar;
   }
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int tam)
{
    int* p, *q, *indiceMenor;

    for (p = arr; p < arr+tam-1; p++)
    {
        indiceMenor = p;
        for (q = p+1; q < arr+tam; q++)
          if (*q < *indiceMenor)
            indiceMenor = q;

        swap(indiceMenor,p);
    }
}

int main()
{
    int tam = 5;
    int arr[] = {5,6,21,3,7};
    cout << "array desordenado" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr,tam);
    cout << "array Ordenado(insertionSort)" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    int arr2[] = {4,8,9,6,21};
    cout << "array desordenado" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    selectionSort(arr2,tam);
    cout << "array Ordenado(selectionSort)" << endl;
    for(int i = 0; i < tam;i++){
        cout << arr2[i] << " ";
}
    return 0;
}
