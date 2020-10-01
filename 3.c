#include <stdio.h>

void conta_caracteres(char palavra[]);

int main(){
	char palavra[31];
	printf("Digite a string:\n");
	scanf("%30[^\n]",palavra);
	system("pause");
	conta_caracteres(palavra);
	return 0;
}

void conta_caracteres(char *string){
    int i,j=0;
    char nomeSemEspaco[31];
    printf("%s\n",string);
    for(i=0;i<31;i++){
        if(string[i]=='\0')
            break;
        if(string[i]==' ')
            continue;
        nomeSemEspaco[j]=string[i];
        j++;
    }
    printf("%d\n",strlen(nomeSemEspaco));
}
