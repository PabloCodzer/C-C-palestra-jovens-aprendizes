#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    cout << "###############################################" << endl;
    cout << "Programa que aponta para um ponteiro:" << endl;
    cout << "Resumo:" << endl;
    cout << "o que faz o ponteiro - serve para acessar um endereco memoria." << endl;
    cout << "é mais eficiente manipular a memoria diretamente, do que copiar uma variavel para outra" << endl;

    int *p;

    int x = 10; 
    p = &x;

    cout << "ponteiro: "<< *p << endl;
    cout << "endereco ponteiro: "<< p << endl;
    cout << "endereco da var: "<< &x << endl;

    cout << "Insira novo valor para X atraves de P"  << endl; 
    cin >>  *p;
    cout << "novo valor: "<< x << endl;

    cout << "###############################################" << endl;    
    cout << "Programa especificamente em C, dentro CPP" << endl;

    int *px = NULL;
    int xp = 10;
    px = &xp;
    printf("Valor de xp: %d\n", xp); 
    printf("Endereço de xp: %p\n", (void*)&xp); 
    printf("Endereço de p: %p\n", (void*)&px); 
    cout << "###############################################" << endl;    

    cout << "Sempre inicialize os ponteiros. Ponteiro não inicializado é mau caráter. Sempre inicie com NULL"<< endl;
    cout << " Aritmética de Ponteiros: " << endl;

    cout << "Somar um inteiro a um ponteiro, você avança o ponteiro para a próxima posição do tipo correspondente."<< endl;

    cout << "Ponteiros e Arrays: Em C, arrays e ponteiros têm uma relação muito próxima. "<< endl;
    cout << "O nome de um array é, na maioria das vezes, tratado como um ponteiro para o seu primeiro elemento."<< endl;

    return 0; 
}