#include <iostream>
#include <locale.h>
#include <fstream>

struct Alunos {
	std::string nome;
	std::string matricula;
	float AEP1;
	float Prova1;
	float AEP2;
	float Prova2;
	float sub;
	float media;
	std::string status;		
}typedef Alunos;


Alunos alunos[100];

void cabecalho ();

bool ListaRelatorios ();

bool CadastroAlunos ();

void funcaoCadastro ();








