#include<iostream>
#include<cstdlib>
#include<cmath>
#include"header.h"
using namespace std;


Aluno* espacoMem(int Tam){
    Aluno *pointer, *pont, *p;

    pont =  (Aluno*) malloc(Tam*sizeof(struct Aluno));
    if(pont == NULL){
        cout<<"Error na aloca��o dinamica! \n";
        exit(0);

    }
    p = pont;
    //cout<<"Nome(s) do aluno(s) e a(s) idade(s) em seguida: \n"; //cout<<Tam;s� pra testar
    for(int i =0;i <Tam;i++){
		fflush(stdin);
        cout<<"Nome do aluno em seguida: \n";
        cin.getline(p->nome, 50);
        cout<<"E a(s) idade(s) em seguida: \n";
        cin>>p ->idade;

        cout << "Digita a nota1: \n";
        cin >> p->nota1;
		while(p->nota1 > 10 || p->nota1 < 0){
			cout<<"\nnota invalida, digite novamente"<<endl;
			cin >> p->nota1;
		}

        cout << "Digita a nota2: \n";
        cin >> p->nota2;
		while(p->nota2 > 10 || p->nota2 < 0){
			cout<<"\nnota invalida, digite novamente"<<endl;
			cin >> p->nota2;
		}

        p->mediat = p->nota1 * 0.4 + p->nota2 * 0.6;
		if(p->mediat >= 6){
        	p->status = true;
        	
		}else{
			p->status = false;
		}
        p++;
    }
    return pont;
}
Aluno* passandoMais(Aluno *alu, int maisAlu, int *Tam){
	
	Aluno *aluno;
	int Tam_2;
	
	
	Tam_2 = *Tam+maisAlu;
	aluno = (Aluno*) realloc(alu, (Tam_2)*sizeof(struct Aluno));
	if (aluno != NULL){
		alu=aluno;
		cout<<"\nRealocou!\nNovo TAMANHO:"<<Tam_2<<endl;
	} else {
		cout<<"!!Realoca??o de Mem?ria para o Vetor de Pontos FALHOU!!";
		return aluno;
	}
	cout<<"\nAdicione os NOVOS Pontos\n";
	for(int i=0; i<*Tam; i++){
		alu++;
	}
	for(int i=*Tam; i<Tam_2; i++){
		
		fflush(stdin);
        cout<<"Nome do aluno em seguida: \n";
        cin.getline(alu->nome, 50);
        cout<<"E a(s) idade(s) em seguida: \n";
        cin>>alu ->idade;
        cout << "Digita a nota1: \n";
        cin >> alu->nota1;
		while(alu->nota1 > 10 || alu->nota1 < 0){

			cout<<"\nnota invalida, digite novamente"<<endl;
			cin >> alu->nota1;
			
		}
		//-------
        cout << "Digita a nota2: \n";
        cin >> alu->nota2;
		while(alu->nota2 > 10 || alu->nota2 < 0){
			
			cout<<"\nnota invalida, digite novamente"<<endl;
			cin >> alu->nota2;
			
		}
		//-------
        alu->mediat = alu->nota1 * 0.4 + alu->nota2 * 0.6;
		if(alu->mediat >= 6){
        	alu->status = true;
        	
		}else{
			alu->status = false;
		}
		alu++;
	}
	cout<<endl<<endl;
	*Tam = Tam_2;
	return aluno;

}

void listaAlu(Aluno *list, int quant){
	system("cls");
	int soma = 0;
	for(int i = 0; i < quant; i++){
		cout<<"Dados do aluno "<< i+1 << ":"<<endl;
		cout<<"Nome: ";
		cout<<list->nome<<endl;
		cout<<"Idade: ";
		cout<<list->idade<<endl;
		cout<<"Media: ";
		cout<<list->mediat<<endl;
		cout<<"Status: ";
		if(list->status == true){
			cout<<"Aprovado"<<endl;
		}else{
			cout<<"reprovado"<<endl;
		}
	
		soma += list->mediat;
	}
	cout<<endl;
	int total = soma / quant;
	cout<<"A media aritmetica: "<<total<<endl;
}

void buscarNota(Aluno *search, int quant){
	int posicao;
	for(int i=0; i<quant; i++){
		cout<<i+1<<"::"<<search->nome<<endl;
		search+=1;
	}
	cout<<"quais do alunos vc quer mudar de nota?"<<endl;
	cin>>posicao;

	while(posicao>quant || posicao<1){
		cout<<"error no digito do valor da posicao:\n";
		cout<<"\nInforme outra Posi��o entre (1-"<<quant<<"): ";
		cin>>posicao;
	}
	for(int i=0; i<posicao-1; i++){
		cout<<"Mudando de nota1:\n";
		cin>>search->nota1;
		cout<<"Mudando de nota2:\n";
		cin>>search->nota1;
		search++;	
	}
	
	/*a->x = P_P->x;
	a->y = P_P->y;*/
}
/*

*/
