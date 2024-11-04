#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int *ptr = NULL;
    int num_arr[] = {0, 9, 18};
    cout << "Parte dois do estudo de ponteiros" << endl;

    ptr = num_arr;
    int tam_arr = sizeof(num_arr)/sizeof(num_arr[0]);

    cout << "Tamanho do array: " << tam_arr << endl;

    for (int i = 0; i < tam_arr; i++)
    {
        cout << *ptr + i << endl;
    }
    
    cout << "Outra forma" << endl;

    for (int i = 0; i < tam_arr; i++)
    {
        cout << (*ptr + i) << endl;
    }

    cout << "Array inverso " << endl;

    for (int j = tam_arr; j > 0; j--)
    {
        cout << *ptr + j << endl;
    }

    cout << "Parte do array multidimensional arr[3][4], com ponteiro " << endl;

    int bi_arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Printando array:" << endl;

    int (*par)[4] = bi_arr;

    for (int i = 0; i < 3; i++)
    {
        cout << "[" << *(*(par + i) + 3) << "]" << endl;
    }

    cout << "Resumo: sempre inicie o ponteiro direto recebendo o array." << endl;

    cout << "**********************************************************" << endl;

    return 0; 
}