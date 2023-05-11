//INTERFACE
//valor -> nome do aluno
//chave -> matricula
typedef int Chave;
typedef char Valor[30];
typedef struct map* Map;

struct map{
	Chave chave;
	Valor valor;
	Map prox;
};
void inserir(Chave c, Valor v, Map *M);
int remover(Chave c, Map *M);
int pesquisar (Chave c, Valor v, Map M);
void exibe(Map M);
void destroi(Map *M);


