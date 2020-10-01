#include <stdio.h>

void mostrarNaTela(int variavel);

int main(){
	int variavel;
	printf("Digite um numero para variavel:\n");
	scanf("%d",&variavel);
	system("pause");
	mostrarNaTela(variavel);

	return 0;
}

void mostrarNaTela(int numero){
    int *ptr;
    int i;
    ptr=&numero;
    printf("nome da variavel: numero\n");
	printf("valor da variavel: %d\n",numero);
	printf("endereco da variavel: %p\n",ptr);
	printf("nome do ponteiro: ptr\n");
    printf("endereco do ponteiro: %p\n",&ptr);
    printf("conteudo apontado pelo ponteiro: %d\n",*ptr);
}
