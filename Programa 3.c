#include <stdio.h>

int main(){
	
	FILE *archivo;
	int x;
	int total = 0;
	
	
	archivo = fopen("numeros.txt", "r");
	
	if(archivo == NULL){
		printf("No existe el archivo");
		return 0;
	}
	
	while(!feof(archivo)){
		fscanf(archivo, "%d,", &x);
		total = total + x;  
		printf("%d\n", total);
		x = 0;
	}
	
	fclose(archivo);
	return 0;
	
}
