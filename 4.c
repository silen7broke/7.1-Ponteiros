#include <stdio.h>
#include <math.h>

void mostraNaTela(int numeros[]);
float calculo(int numeros[]);
void manipulacao(float resp, int[]);

int main(){
	int i, numeros[5];
	float resp;
	for(i=0;i<=4;i++){
        printf("Digite o numero %d: ",i+1);
        scanf("%d",&numeros[i]);
	}
	resp=calculo(numeros);
	printf("Resultado da equacao: %.2f\n",resp);
	system("pause && cls"); /*testei e deu certo ^o^*/
	mostraNaTela(numeros);
    manipulacao(resp,numeros);
}

void mostraNaTela(int *numeros){
    int i, *ptr;
    printf("-----------variaveis----------------\n");
    for(i=0;i<=4;i++){
        printf("Nome da variavel: numeros[%d]\n",i);
        printf("Numero: %d\n",numeros[i]);
        printf("Endereco: %p\n",&numeros[i]);
        printf("------------------------------------\n");
        ptr=&numeros[i];
	}
	system("pause");
	system("cls");
}

float calculo(int *numeros){
    return((((float)numeros[0]+(float)numeros[1])*(float)numeros[2])/pow((float)numeros[3],2))+(float)numeros[4];
}

void manipulacao(float resp, int *numeros){
    float *ptrF;
    int *ptrD;
    ptrF=&resp;
    ptrD=&numeros[0];
    float RESP_P=((float)*ptrD)+(*ptrF);
    printf("Valor de RESP_P: %.2f\n",RESP_P);
    printf("Endereco de RESP_P: %p\n",&RESP_P);
}
