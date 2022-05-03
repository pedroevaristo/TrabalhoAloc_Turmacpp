#include <iostream>
#include <cstdlib>
#include <cmath>
#include "header.h"
using namespace std;

int main(){
    int Tam;
    Aluno *p1;
    cout << "Quantos alunos: \n";
    cin >> Tam;
    p1 = espacoMem(Tam);
    int escolha;
    while(true){
	cout << "\n1 - acrescimo de aluno;\n2 - mostrar os alunos;\n3 -mudar uma nota\n4 - sair;\n";
    cin>> escolha;
	
    switch(escolha){
    	case 1:
    		cout << "Quantos alunos ";
        	int nTam;
        	cin >> nTam;
        	p1 = passandoMais(p1, nTam,&Tam);
    		break;
    	case 2:
    		listaAlu(p1, Tam);
    		break;
		case 3: 
            buscarNota(p1, Tam);
            break;
        case 4:
    		free(p1);
			exit(0);
    		break;
    	
	}
	}
}
/*
cin >> escolha;
    if (escolha == 1){
        cout << "Quantos alunos ";
        int nTam;
        cin >> nTam;
        passandoMais(p1, nTam,&Tam);
    }else{
        exit(0);
     }
 */
