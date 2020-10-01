#include <stdio.h>

void equacao(float variavelA, float variavelB, float variavelC);

int main(){
	float variavelA, variavelB, variavelC;
	printf("Digite um numero para variavel A\n"
        "Depois para variavel B\n"
        "Depois para variavel C:\n");
	scanf("%f%f%f",&variavelA,&variavelB,&variavelC);
	system("pause");
	equacao(variavelA, variavelB, variavelC);
	return 0;
}

void equacao(float a, float b, float c){
    float *ptrA, *ptrB, *ptrC;
    ptrA=&a;
    ptrB=&b;
    ptrC=&c;
    printf("%.2f",(((*ptrA)*(*ptrB))/(*ptrC)));
}
