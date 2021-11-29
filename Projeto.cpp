#include <iostream>
#include <locale.h>
#include <fstream>


int menu (){
	
	int escolha = ' ';
	std::cout << "Bem vindo (a)!\n";
	std::cout << "\nEste é o sistema de manipulação de notas dos alunos.\n";
	std::cout << "\nEscolha a opção desejada: \n";
	std::cout << "\n 1 - Cadastrar dados de alunos\n 2 - Gerar relatorios\n 3 - Finalizar programa ";
	std::cout << "\n";
	std::cin  >> escolha;
	
	system("cls");
	return escolha;
}

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

	


bool ListaRelatorios ( ){
	std::ofstream arquivo;
	arquivo.open("database.csv",std::fstream::app);
	
		if (!arquivo.is_open()) {
		std::cout << "Nao foi possivel abrir o arquivo.\n";
		return false;	
	}
	else{

		arquivo << Alunos.nome << ";";
		arquivo	<< Alunos.matricula << ";";
		arquivo	<< Alunos.AEP1 << ";";
		arquivo	<< Alunos.Prova1 << ";";
		arquivo	<< Alunos.AEP2 << ";";
		arquivo	<< Alunos.Prova2 << ";";
		arquivo	<< Alunos.sub << ";";
		arquivo	<< Alunos.media << ";";
		arquivo	<< Alunos.status << "\n";
	
		arquivo.close();
		return true;
		
			}
}



	
	
	bool CadastroAlunos (){
		
	std::ifstream arquivo;
	arquivo.open("database.csv");
	if (!arquivo.is_open()) {
		std::cout << "Houve um erro ao abrir o arquivo!\n";
		return false;	
	}
	

	for (int i = 0; i < 100; i++) {
		std::cout << "Aluno n " << i+1 << "\n";
		std::cout << "Nome: " << Alunos[i].nome << "\n";
		std::cout << "Matricula: " << Alunos[i].matricula << "\n";
		
		Alunos alunos[100];
	}
	
	return true;
}

void funcaoCadastro () {
	
	Alunos alunoCAD;
	
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.nome;
	
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.matricula;
	 
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.AEP1;
	
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.Prova1;
	
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.AEP2;
	 
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.Prova2;
	
	
	
	alunoCAD.media;
	
	std::cin  >> alunoCAD.sub;
	 
	
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.status;
	 
	
	
}
	
	
	/*
		
	std::cout << "Digite o nome do aluno(a): ";
	std::cin >> alunosCad.nome;
	
	std::cout << "Digite o numero da matricula do aluno(a): ";
	std::cin >> alunosCad.matricula;
		
	std::cout << "Digite a nota da AEP 1: ";
	std::cin >> alunosCad.AEP1;
		
	std::cout << "Digite a nota da Prova 1: ";
	std::cin >> alunosCad.Prova1;
		
	std::cout << "Digite a nota da AEP 2: ";
	std::cin >> alunosCad.AEP2;
		
	std::cout << "Digite a nota da Prova 2: ";
	std::cin >> alunosCad.Prova2;
	
	do {
	
	std::cout << "Digite a nota da substitutiva: ";
	std::cin >> alunosCad.sub;
		
		
		
	}while (alunosCad.media < 6);
		
		
	std::cout << "Digite o numeoro da matricula do aluno(a): ";
	std::cin >> alunosCad.media = 0;
	

	std::cin >> alunosCad.status = "...";
	
		
	  if (CadastroAlunos (alunosCad)) {
		std::cout << "Aluno teste cadastrado\n";
	} else {
		std::cout << "Erro ao cadastrar aluno teste\n";
	}
	
	*/
	
	
	
	
	
	
/*
	void teste () {
	Aluno alunoTeste;
	alunoTeste.nome = "Aluno Teste";
	alunoTeste.matricula = "1234";
	alunoTeste.aep1 = 1.3;
	alunoTeste.prova1 = 5.2;
	alunoTeste.aep2 = 1.8;
	alunoTeste.prova2 = 6.2;
	alunoTeste.media = 0;
	alunoTeste.sub = 0;
	alunoTeste.status = "nao calculado";
	
	if (cadastraAluno (alunoTeste)) {
		std::cout << "Aluno teste cadastrado\n";
	} else {
		std::cout << "Erro ao cadastrar aluno teste\n";
	}
}	*/
















int main () {
char opcao;
do{
	opcao = menu();
	switch (opcao) {
			case '1':
			CadastroAlunos();
			break;
		
			case '2':
			ListaRelatorios ();
			break;
			
			case '3':
			std::cout << "Deseja finalizar a sessão?\n 1 - Sim === 2 - Não";
			
			if ('1'){
				
			std::cout << "Finalizando sessao...";
			
			}
			else if ('2'){
				
			return opcao;
			}
		
	}
	
}	while (opcao != '3');
 
}