#include <stdio.h>

int main(){
	
	FILE *archivo;
	char letras[3];
	
	
	archivo = fopen("numeros.txt", "r");
	
	if(archivo == NULL){
		printf("No existe el archivo");
		return 0;
	}
	
	while(!feof(archivo)){
		fgets(letras, 3, archivo);  //file get string
		printf("%s\n", letras);
	}
	
	fclose(archivo);
	return 0;
	
}
