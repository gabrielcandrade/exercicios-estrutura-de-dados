#include <stdio.h>

int main(int argc, char** argv)
{	
	float nota1, nota2, nota3, media, notasDoAluno[3];
	int aluno = 0, numValid = 1;
	
	while (aluno <= 10){ // Quantidade
		while (numValid == 1){
			printf("Informe a sua primeira nota: \n");
			scanf("%f", &nota1);
			numValid = 1;
			if (nota1 <= 10){ // A nota é valida e pode sair do While.
				numValid = 0;
			}
		}
		while (numValid == 1){
			printf("Informe a sua segunda nota: \n");
			scanf("%f", &nota2);
			numValid = 1;
			if (nota1 <= 10){ // A nota é valida e pode sair do While.
				numValid = 0;
			}
		}
		while (numValid == 1){
			printf("Informe a sua terceira nota: \n");
			scanf("%f", &nota3);
			numValid = 1;
			if (nota1 <= 10){ // A nota é valida e pode sair do While.
				numValid = 0;
			}
		}
		
		media = float(nota1 + nota2 + nota3) / 3.0;
		
		for (int cont = 0; cont <= strlen(notasDoAluno); cont++){
			printf(cont);
		}
		
		aluno++;
	}		
	return 0;
}