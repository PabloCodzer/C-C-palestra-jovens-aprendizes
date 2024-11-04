#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string.h>

#define TAM_MAX 9

using namespace std;

void soma_nove( int *var_seila)
{
    *var_seila += 9; 
}

void func_de_arrai(int *arr_se)
{
    for (int i = 0; i < TAM_MAX; i++)
    {
        cout << *(arr_se + i) << endl;
    }
}

// o ponteiro muda o endereço da variavel
void ponteiro_pra_ponteiro(int **ptrPtr)
{
    static int valve = 33;
    *ptrPtr = &valve;
}

int *ponteiro_pra_ponteiro2(int **ptrPtr)
{
    static int valve = 33;
    *ptrPtr = &valve;
    return  *ptrPtr;
}

int main()
{
    int numero = 1;
    cout << "###############################################" << endl;        
    cout << "Valor do numero antes: "<< numero << endl;
    soma_nove(&numero);
    cout << "Valor do numero depois: "<< numero << endl;
    cout << "###############################################" << endl;    

    cout << "Parte da função com arrays: " << endl;

    int arreizao[TAM_MAX]= {};
    arreizao[0] = 11;
    arreizao[1] = 22;
    func_de_arrai(arreizao);

    cout << "###############################################" << endl;  

    int *ptr_ptr = NULL;
    ponteiro_pra_ponteiro( &ptr_ptr ); // serve pra mudar o valor do ponteiro com func

    cout << "ponteiro 1 :" << *ptr_ptr << endl;

    int *ptr_ptr2 = NULL;
    ptr_ptr2 = ponteiro_pra_ponteiro2( &ptr_ptr2 );

    cout << "ponteiro 2 :" << *ptr_ptr2 << endl; 

    return 0; 
}