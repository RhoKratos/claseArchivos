#include <stdio.h>

int main(){
	
	FILE *archivo;
	char letra;
	
	
	archivo = fopen("numeros.txt", "r");
	
	if(archivo == NULL){
		printf("No existe el archivo");
		return 0;
	}
	
	while(!feof(archivo)){
		letra = fgetc(archivo);
		printf("%c\n", letra);
	}
	
	fclose(archivo);
	return 0;
	
}
