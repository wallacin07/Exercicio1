#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num[50],cont=0;
	
	for(cont=0; cont<50; cont++){
		printf("Informe o %d� n�mero:",cont+1);
		fflush(stdin);
		scanf("%d",&num[cont]);
		
	}
	
	for(cont=0; cont<50; cont++){
		printf("%d� n�mero: %d\n",cont+1, num[cont]);
	}


	
	system("pause");
	return 0;
}
