#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include<string.h>

struct  Pessoa
{
    char nome[50];
    int idade;
    float altura;
};

struct  Pessoa2
{
    std::string nome;
    int idade;
    float altura;
};
 
typedef struct 
{
    std::string nome;
    int idade;
    float altura;
} PessoaCPP ;


typedef struct {
    char nome[50];
    int idade;
    float altura;
} PessoaLs;

using namespace std;

int main()
{
    // cout << "###############################################" << endl;    
    // cout << "Structs em C: " << endl;
    // struct Pessoa P1;
    // strcpy( P1.nome, "aham");
    // P1.altura = 1.11f;
    // P1.idade = 90;

    // cout << "Primeira Struct simples:" << endl;
    // cout << P1.nome << endl;
    // cout << P1.idade << endl;
    // cout << P1.altura << endl;

    // cout << "###############################################" << endl;    
    // cout << "Iniciando Direto:" << endl;
    // struct Pessoa P2  = {"Outra pessoa", 66, 99};

    // cout << "Estruct 2" << endl;
    // cout << P2.nome << endl;
    // cout << P2.idade << endl;
    // cout << P2.altura << endl;
 
    // cout << "###############################################" << endl;    
    // cout << "Struct Com ponteiro:" << endl;

    // struct Pessoa p3 = {"Outra PTR", 66, 99};

    // struct Pessoa *ptr_pssoa = &p3; 
    // cout << ptr_pssoa->nome << endl;
    // cout << ptr_pssoa->altura << endl;

    // ptr_pssoa->altura = 1.99f;
    // cout << ptr_pssoa->altura << endl;

    // cout << "###############################################" << endl;    
    // cout << "Struct array de 10 pessoas:" << endl;

    // struct Pessoa pessoas[10];
    // struct Pessoa *ptr_pssoas = &pessoas[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     ptr_pssoas[i].altura = 1.9f * i;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << ptr_pssoas[i].altura << endl;
    // }

    // cout << "###############################################" << endl;    
    // cout << "Parte do typedef" << endl;

    // PessoaLs pess[10]; 
    // PessoaLs *ppt = &pess[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     ppt[i].altura = 123.0f;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << ppt[i].altura << endl;
    // }


    cout << "###############################################" << endl;    
    cout << "###############################################" << endl;    
    cout << "Parte do C++ (beeeem mais facil)" << endl;


    PessoaCPP em_cpp;
    em_cpp.nome = "adao servente";
    em_cpp.altura = 1.45f;
    em_cpp.idade =99;

    cout << em_cpp.nome << endl;

    cout << "###############################################" << endl;   

    Pessoa2 *pessoa_v22 = new Pessoa2;

    pessoa_v22->nome = "Maria";
    pessoa_v22->idade = 25;
    pessoa_v22->altura = 1.68;


    cout << "Nome: " << pessoa_v22->nome << endl;
    cout << "Idade: " << pessoa_v22->idade << endl;
    cout << "Altura: " << pessoa_v22->altura  << endl;

    delete pessoa_v22;


    cout << "###############################################" << endl;   

    PessoaCPP *pessoa_v223 =  new PessoaCPP;

    pessoa_v223->nome = "Maria";
    pessoa_v223->idade = 25;
    pessoa_v223->altura = 1.68;


    cout << "Nome: " << pessoa_v223->nome << endl;
    cout << "Idade: " << pessoa_v223->idade << endl;
    cout << "Altura: " << pessoa_v223->altura  << endl;

    delete pessoa_v223;

    cout << "###############################################" << endl; 
    cout << "Criand lista de Pessoas...." << endl;

    PessoaCPP *pessoa_list =  new PessoaCPP[4];

    for (int i = 0; i < 4; i++)
    {
        pessoa_list[i].altura = i;
        pessoa_list[i].altura = 1.99f;
        pessoa_list[i].nome =  "aham";
    }
    
        for (int i = 0; i < 4; i++)
    {
        cout << pessoa_list[i].altura;
        cout << pessoa_list[i].altura;
        cout << pessoa_list[i].nome    << endl;
    }
    delete[] pessoa_list;

    return 0; 
}