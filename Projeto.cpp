#include "funcoes.cpp"


int main () {
char opcao = ' ';
do{
	 opcao = menu();

	switch (opcao) {
			case '1':
			funcaoCadastro ();
			break;
		
			case '2':
				
			std::cout << "teste caso 2 \n";

			break;
			
			case '3':
			std::cout << "\nFinalizando sessao\n";
			
			break;
			default:
	   		std::cout << "\nOpcao invalida\n Tente Novamente!\n";
			}
		
	}while (opcao != '3');
 
}
