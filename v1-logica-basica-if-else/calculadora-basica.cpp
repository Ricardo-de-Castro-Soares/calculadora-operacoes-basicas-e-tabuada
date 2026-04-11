#include <iostream>
using namespace std;

int main()
{
	int opcao, numero, resultadoTabuada, i;
	float soma1, soma2, resultadoSoma, sub1, sub2, resultadoSub, mult1, mult2, resultadoMult, divisao1, divisao2, resultadoDivisao;
	
	do{

		cout<<"\n--------Calculadora--------\n";
		cout<<"\nOperações de Soma [1]";
		cout<<"\nOperações de Subtração [2]";
		cout<<"\nOperações de Multiplicação [3]";
		cout<<"\nOperações de Divisão [4]";
		cout<<"\nTabuada [5]";
		cout<<"\nSAIR [0]\n";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;
		
		if(opcao == 1){
			cout<<"\nDigite um numeros: ";
			cin>>soma1;
			cout<<"Digite outro numero: ";
			cin>>soma2;
			
			resultadoSoma = (soma1+soma2);
			
			cout<<"\nO resultado de "<<soma1<<" + "<<soma2<<" é igual a "<<resultadoSoma<<"\n\n";
		}else if(opcao == 2){
			cout<<"\nDigite um numeros: ";
			cin>>sub1;
			cout<<"Digite outro numero: ";
			cin>>sub2;
			
			resultadoSub = (sub1 - sub2);
			
			cout<<"\nO resultado de "<<sub1<<" - "<<sub2<<" é igual a "<<resultadoSub<<"\n\n";
		}else if(opcao == 3){
			cout<<"\nDigite um numeros: ";
			cin>>mult1;
			cout<<"Digite outro numero: ";
			cin>>mult2;
			
			resultadoMult = (mult1 * mult2);
			
			cout<<"\nO resultado de "<<mult1<<" x "<<mult2<<" é igual a "<<resultadoMult<<"\n\n";			
		}else if(opcao == 4){
			cout<<"\nDigite um numeros: ";
			cin>>divisao1;
			cout<<"Digite outro numero: ";
			cin>>divisao2;
			
			resultadoDivisao = (divisao1 / divisao2);
			
			cout<<"\nO resultado de "<<divisao1<<" / "<<divisao2<<" é igual a "<<resultadoDivisao<<"\n\n";	
		}else if(opcao == 5){
			cout<<"\nEscolaha um numero: ";
			cin>>numero;
			
			for(int i=1; i <=10; i++)
			
			cout<<"\n"<<numero<<" x "<<i<<" = "<<(numero * i)<<"\n";
		}else if(opcao >= 6){
			cout<<"\nOPÇÃO INVALIDa\n\n";
		}	
		
	}while(opcao != 0);
	
	cout<<"\n\nPROGRAMA ENCERRADO";
	
	return 0;
}
