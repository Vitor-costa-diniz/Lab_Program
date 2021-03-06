#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Protótipos da funções
int diagonalPrincipal(int *, int*);
void aleatoria(int *, int *);
void exibirMatriz(int *, int*);

int main(int argc, char *argv[]){
	//Declaração de Variáveis
	int vetor[3], *matriz_M, aux;

	//Recebendo os argumentos de entrada
	if (argc != 3){
		printf("Uso incorreto. O usuário deve entrar com 2 argumentos (numeros inteiros).\nExemplo:\n./lista5_q08.e 2[linhas] 3[colunas]\nObs: Ignore os [.] na entrada.\n");
		exit(1);
	}

	aux = 1;
	while (aux < 3){
		*(vetor + (aux-1)) = atoi(*(argv + aux));
		aux++;
	}

	//Validando os argumentos de entrada
	if ((*vetor <= 0)  || (*(vetor + 1) <= 0) || (*vetor != *(vetor + 1))){
		printf("Uso incorreto. As dimnsões da matriz devem ser não nulas e iguais.\nExemplo:\n./lista5_q08.e 2[linhas] 3[colunas] 5[lim_inf] 15[lim_sup] 10[limiar]\nObs: Ignore os [.] na entrada.\n");
		exit(2);
	}
	
	//Gerando a Matriz normal M e a binária S
	matriz_M = malloc((*vetor * *vetor) * sizeof(int));

	//Validando as Matrizes dadas
	if (!matriz_M){
		puts("Não foi possível alocar a memória requisitada.\n");
		exit(4);
	}

	//Funções processando os dados
	srand(time(NULL));

	aleatoria(matriz_M, vetor);

	*(vetor + 2) = diagonalPrincipal(matriz_M, vetor);

	//Exibindo os dados
	puts("Matriz M (Original):");
	exibirMatriz(matriz_M, vetor);

	puts("Somatório da Diagonal Principal:");
	printf("%d\n", *(vetor + 2));
	if (!((*(vetor + 2))%2)) puts("Par");
	else puts("Impar");

	//Liberando a Memória e Encerrando programa
	puts("");
	free(matriz_M);
	
	return EXIT_SUCCESS;
}

void exibirMatriz(int *A, int *dim){
	for (int k = 0; k < (*dim * *dim); k ++){
		printf("%d\t", *(A + k));
		if(k % (*dim) == (*dim - 1)) printf("\n");
	}
}

void aleatoria(int *A, int *lim){
	for (int k = 0; k < (*lim * *lim); k++) *(A + k) = rand() % 100;
}

int diagonalPrincipal(int *A, int *dim){
	int aux = 0;
	for (int k = 0; k < (*dim * *dim); k += *dim + 1) aux += *(A + k);
	return aux;
}
