#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string.h>

#define LL_UINT long long unsigned int

using namespace std;


//  Obs: escrito para C ansi
int * aloca_mem_vet(int tamanho_vetor)
{
    int *vet =  (int *)malloc(tamanho_vetor * sizeof(int));
    if (vet == NULL)
    {
        cout << " Memoria indisponível " << endl;
        return NULL;
    }
    return vet;
}

int * aloca_mem_vet_cpp(int tamanho_vetor)
{
    int *vet_cpp = new int[tamanho_vetor];
    return vet_cpp;
}


int main()
{
    cout << " Inicialmente, aloca-se memoria para ter um comportamente mais ágil dos vetores e geralmente usado em buscas;" << endl;
    cout << "**********************************************************" << endl;

    int * vetor_teste = NULL; 
    int tamanho= 0; 

    cout << "Digite quantos itens tera o vetor de inteiros:" << endl;
    cin >> tamanho;
    cout << tamanho << endl;

    vetor_teste =  aloca_mem_vet(tamanho);

    vetor_teste[0] = 11;
    vetor_teste[1] = 22;
    vetor_teste[2] = 33;

    cout << "**********************************************************" << endl;

    for (int i = 0; i < tamanho; i++)
    {
       cout << vetor_teste[i] << endl;
    }
    free ( vetor_teste ) ;

    cout << "**********************************************************" << endl;
    cout << "Em CPP eh mais facil de alocar memoria; " << endl;

    int * vetor_teste_2 = NULL; 
    vetor_teste_2 = aloca_mem_vet_cpp(tamanho);
    vetor_teste_2[0] = 99;
    vetor_teste_2[1] = 98;
    vetor_teste_2[2] = 91;

    for (int i = 0; i < tamanho; i++)
    {
       cout << vetor_teste_2[i] << endl;
    }
    free ( vetor_teste_2 ) ;

    cout << "**********************************************************" << endl;
    cout << " Matrizes: Em C" << endl;

    LL_UINT colunas = 3;
    LL_UINT linhas = 4;
    int **matriz;

    matriz = (int **) malloc(linhas * sizeof(int *));

    // aloc a memoria da matriz;
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // inicializa a matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = (i * colunas) + j;
        }
    }

    for (int i = 0; i < linhas; i++) 
    {
        for (int j = 0; j < colunas; j++) 
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    cout << "**********************************************************" << endl;
    cout << " Matrizes: Em C++" << endl;

    int **matriz_cpp = new int *[linhas];

    for (int i = 0; i < linhas; i++)
    {
        matriz_cpp[i] = new int[colunas];
    }
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz_cpp[i][j] = (i * colunas) + j;
        }
    }

    for (int i = 0; i < linhas; i++) 
    {
        for (int j = 0; j < colunas; j++) 
        {
            cout << "[" << matriz_cpp[i][j] << "]";
        }
        cout << endl;
    }

    for (int i = 0; i < linhas; i++)
    {
         delete[] matriz_cpp[i];
    }
     delete[] matriz_cpp;

    return 0; 
}