#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	float sal,resp1,resp2;
	
	printf("QUAL O SAL�RIO:");
	scanf("%f",&sal);
	resp1 = sal*0.15;
	resp1 = resp1+sal;
	resp2 = resp1*0.08;
	resp2 = resp1-resp2;
	
	printf("O SAL�RIO INICIAL �: R$ %.2f .\nO SAL�RIO COM AUMENTO �: R$ %.2f .\nE O SAL�RIO FINAL COM DESCONTO �: R$ %.2f .\n",sal,resp1,resp2);
	

	system("pause");
	return 0;
}
