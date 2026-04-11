#include <iostream>
using namespace std;

int main()
{
	int opcao, num, resultadoTabuada, i;
	double soma, qtdNum, resultadoSoma, sub, resultadoSub, mult, resultadoMult = 1, divisao, resultadoDivisao;
	
	do{

		cout<<"\n========= CALCULADORA 2.0 =========\n"; 
		cout<<"\n[1] Operações de Soma";
		cout<<"\n[2] Operações de Subtração";
		cout<<"\n[3] Operações de Multiplicação";
		cout<<"\n[4] Operações de Divisão";
		cout<<"\n[5] Tabuada";
		cout<<"\n[0] SAIR\n";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;
		
		system ("cls");		
		switch(opcao){
			case 1:
				
				resultadoSoma = 0;
				
				cout<<"\nDigite quantos números irá somar: ";
				cin>>qtdNum; cout<<"\n";			
				
				for(int i = 1; i <= qtdNum; i++){
					cout<<"Digite o número que irá somar: ";
					cin>>soma;	
					resultadoSoma+=soma;
				}
						
				cout<<"\nO resultado da soma é igual a "<<resultadoSoma<<"\n\n";
				system("pause");
				system("cls"); 
				break;
			case 2: 
				
				cout<<"\nDigite quantos números irá subtrair: ";
				cin>>qtdNum; cout<<"\n";			
				
				for(int i = 1; i <= qtdNum; i++){
					cout<<"Digite o número que irá subtrair: ";
					cin>>sub;
					if(i == 1){
						resultadoSub = sub;
					}else{
						resultadoSub-=sub;
					}		
				}
						
				cout<<"\nO resultado da subtração é igual a "<<resultadoSub<<"\n\n";
				system("pause");
				system("cls"); 
				break;			
			case 3:
				resultadoMult = 1;
				
				cout<<"\nDigite quantos números irá Multiplicar: ";
				cin>>qtdNum; cout<<"\n";			
				
				for(int i = 1; i <= qtdNum; i++){
					cout<<"Digite o número que irá Multiplicar: ";
					cin>>mult;	
					resultadoMult*=mult;
				}
						
				cout<<"\nO resultado da Multiplicar é igual a "<<resultadoMult<<"\n\n";
				system("pause");
				system("cls"); 
				break;				
			case 4: 
				
				cout<<"\nDigite quantos números irá dividir: ";
				cin>>qtdNum; cout<<"\n";			
				
				for(int i = 1; i <= qtdNum; i++){
					cout<<"Digite o número que irá dividir: ";
					cin>>divisao;
					if(i == 1){
						resultadoDivisao = divisao;
					}else{
						resultadoDivisao/=divisao;
					}		
				}
				
				cout<<"\nO resultado da divisão é igual a "<<resultadoDivisao<<"\n\n";
				system("pause");
				system("cls"); 
				break;				
			case 5:
				
				cout<<"\nDigite um numero: ";
				cin>>num;
			
				for(int i = 1; i <= 10; i++){
				cout<<"\n"<<num<<" x "<<i<<" = "<<(num * i)<<"\n";
			}
				system("pause");
				system("cls"); 
				break;
			case 0:
				break;
			default:
				cout<<"\nOPÇÃO INVALIDA\n\n";
				system("pause");
				system("cls"); 
               break;	
		}
	}while(opcao != 0);
	
	cout<<"\n\nPROGRAMA ENCERRADO...";
	
	return 0;
}
