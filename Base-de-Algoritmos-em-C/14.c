#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //biblioteca linguas
const float PI = 3.1415; // com moldulariza��o

int main(){
	setlocale(LC_ALL,"portuguese"); // para portugues
	
	float raio;
	
	fflush(stdin);
	printf("Informe o raio do c�rculo:");
	scanf("%f", &raio);
	printf("A �rea do c�rculo � = %.3f m. \n", PI * raio*raio);
	
	system("pause");
	return 0;
	
}
