#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x,y,resp;
	

	printf(" Qual o primeiro numero \n",x);
	scanf("%d",&x);
	printf(" Qual o segundo numero \n",y);
	scanf("%d",&y);
	resp = abs(x-y);
	printf("A diferen�a entre %d e %d �: %d\n",x,y,resp);
	
	system("pause");
	return 0;
}
