#include "funcoesProj.h"






char menu (){
	
	char escolha = ' ';
	std::cout << "Bem vindo (a)!\n";
	std::cout << "\nEste é o sistema de manipulação de notas dos alunos.\n";
	std::cout << "\nEscolha a opção desejada: \n";
	std::cout << "\n 1 - Cadastrar dados de alunos\n 2 - Gerar relatorios\n 3 - Finalizar programa ";
	std::cout << "\n";
	std::cin  >> escolha;
	
	system("cls");
	return escolha;
}



bool ListaRelatorios (Alunos alunos ){
	std::ofstream arquivo;
	arquivo.open("database.csv",std::fstream::app);
	
	if (!arquivo.is_open()) {
		std::cout << "Nao foi possivel abrir o arquivo.\n";
		return false;	
	}
	
	else{


		arquivo << alunos.nome << ";";
		arquivo	<< alunos.matricula << ";";
		arquivo	<< alunos.AEP1 << ";";
		arquivo	<< alunos.Prova1 << ";";
		arquivo	<< alunos.AEP2 << ";";
		arquivo	<< alunos.Prova2 << ";";
		/*
		arquivo	<< alunos.sub << ";";
		arquivo	<< alunos.media << ";";
		arquivo	<< alunos.status << "\n";
	*/
		arquivo.close();
		return true;
	
			}
			}
			







void funcaoCadastro () {
	
	Alunos alunoCAD;
	
	std::cout << "Digite o nome do aluno(a): ";
	std::cin  >> alunoCAD.nome;
	
	std::cout << "Digite o numero da matricula: ";
	std::cin  >> alunoCAD.matricula;
	 
	std::cout << "Digite a nota da AEP 1: ";
	std::cin  >> alunoCAD.AEP1;
	
	std::cout << "Digite a nota da Prova 1: ";
	std::cin  >> alunoCAD.Prova1;
	
	std::cout << "Digite a nota da AEP 2: ";
	std::cin  >> alunoCAD.AEP2;
	 
	std::cout << "Digite a nota da Prova 2: ";
	std::cin  >> alunoCAD.Prova2;
	
	
	/* verificar o calculo
	alunoCAD.media;
	*/
	
	/* verificar se precisa de sub >> IF 
	std::cin  >> alunoCAD.sub;
	 */ 
	
	/* vai ter status a partir da media
	std::cin  >> alunoCAD.status;
	 */	

	if (ListaRelatorios (alunoCAD)) {
		std::cout << "Aluno teste cadastrado\n";
	} else {
		std::cout << "Erro ao cadastrar aluno teste\n";
	}
	
}


	
	bool CadastroAlunos (){
		
	std::ifstream arquivo;
	arquivo.open("database.csv");
	if (!arquivo.is_open()) {
		std::cout << "Houve um erro ao abrir o arquivo!\n";
		return false;	
	}
	else{
	
	 
	 	for (int i = 0; i < 100; i++){
		std::cout << "Aluno n " << i+1 << "\n";
		std::cout << "Nome: " << alunos[i].nome << "\n";
		std::cout << "Matricula: " << alunos[i].matricula << "\n";
		
	}
	 	
	 	
	 
return true;
	
		
	
	
	
}
return true;
}




	

			



	



