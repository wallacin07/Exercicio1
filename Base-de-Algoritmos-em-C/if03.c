#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("INFORME UM N�MERO:");
	fflush(stdin);
	scanf("%d",&num);
	
	if(num % 2 == 0){
		printf("Este � um n�mero par.\n");
	}
	else{
		printf("Este � um n�mero �mpar.\n");
	}
		
	system("pause");
	return 0;
}

