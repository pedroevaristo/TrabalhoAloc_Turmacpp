//Pedro Evaristo, alu202112084, 3(terceiro)periodo de CC feito no dia 3/05/22
struct Aluno
{
    char nome[50];
    int idade;
    int nota1, nota2, mediat;
    bool status;
};

Aluno* passandoMais(Aluno *alu, int maisAlu, int *Tam);
void calcu(int tamanho);
Aluno* espacoMem(int Tam);
void listaAlu(Aluno *list, int quant);
void buscarNota(Aluno *search, int quant);
