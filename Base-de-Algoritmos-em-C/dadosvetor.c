#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetjogo[20],cont = 0,valor1 = 0 ,valor2 = 0,valor3 = 0,valor4 = 0,valor5 = 0,valor6 = 0;
	
	for(cont=0; cont<20; cont++){
		printf("Informe o n�mero tirado no dado(de 1 a 6):",cont);
		fflush(stdin);
		scanf("%d",&vetjogo[cont]);
		
		if(vetjogo[cont] == 1){
			valor1++;
		}
		if(vetjogo[cont] == 2){
			valor2++;
		}
		if(vetjogo[cont] == 3){
			valor3++;
		}
		if(vetjogo[cont] == 4){
			valor4++;
		}
		if(vetjogo[cont] == 5){
			valor5++;
		}
		if(vetjogo[cont] == 6){
			valor6++;
		}
	}
	printf("N�mero 1 foi tirado %d vezes.\n",valor1);
	printf("N�mero 2 foi tirado %d vezes.\n",valor2);
	printf("N�mero 3 foi tirado %d vezes.\n",valor3);
	printf("N�mero 4 foi tirado %d vezes.\n",valor4);
	printf("N�mero 5 foi tirado %d vezes.\n",valor5);
	printf("N�mero 6 foi tirado %d vezes.\n",valor6);
	
	system("pause");
	return 0;
}
