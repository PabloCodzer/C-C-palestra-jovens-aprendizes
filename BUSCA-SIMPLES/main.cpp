#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string.h>
#include <vector>

#define TAM 10

using namespace std;
/*
 *  Printa o vetor int  
 */
void print_vetor(int *vtr)
{
    for (int i = 0; i < TAM; i++)
    {
        cout<< i<< " - " << *(vtr + i) << endl;
    }
}

/*
 *  Printa o vetor string  
 */
void print_vetor_string(string *vtr, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout<< i<< " - " << *(vtr + i) << endl;
    }
}


/*
 *  Busca dentro do vetor int  
 */
void buscaLinear(int *vet, int valor_busca)
{
    for (int i = 0; i < TAM; i++)
    {
        if(*(vet + i) == valor_busca)
        {
            cout << "Valor encontrado: "<< *(vet + i)<< "POSICAO: "<< i << endl;
            return;
        }
    }
    cout << " Valor não encontrado " << endl;
}

/*
 *  Busca dentro do vetor string  
 */
void busca_linear_string(string *str_vet, int tamanho, string val_busca)
{
    for (int i = 0; i < tamanho; i++)
    {
        if( str_vet[i] == val_busca)
        {
            cout << "Valor encontrado: "<< str_vet[i] << " POSICAO: "<< i << endl;
            return;
        }
    }
}


/*
 *  Busca binaria Inteiro
 */
void busca_biaria_int(int *vet, int valor_busca)
{
    int topo = 0;
    int fundo = TAM -2;

    while( topo <= fundo )
    {
        int meio = topo + (fundo - topo) / 2;
       
        if ( *(vet + meio) == valor_busca) 
        {
            cout << "val encontrado: " <<  *(vet + meio) << endl;
            cout << "Posicao: " << meio << endl;
            return;
        }

        if ( *(vet + meio) < valor_busca) 
        {
            topo = meio + 1;
        } 
        else 
        {
            fundo = meio - 1; 
        }
    }
    cout << "Val nao Encontrado: " << endl;
    return;
}

int main()
{
    cout << "Busca Simples: A ideia é ter os ids e nomes em memoria e depois fazer um select no banco" << endl;
    cout << "*****************************************************************************************" << endl;
    
    int vetor_m[TAM] = {0,1,3,5,4,6,7,8,9};

    print_vetor(vetor_m);

    buscaLinear(vetor_m, 11);

    cout << "*****************************************************************************************" << endl;

    string frutas[] = {"maçã", "banana", "laranja", "uva", "manga", "manga verde", "uva verde", "uva cabernet", "uva", "pera"};
    int tamanho_string = sizeof(frutas) / sizeof(frutas[0]);
    print_vetor_string(frutas, tamanho_string);

    busca_linear_string(frutas, tamanho_string, "manga");


    cout << "*****************************************************************************************" << endl;

    busca_biaria_int(vetor_m, 7);

    return 0; 
}