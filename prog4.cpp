#include <stdio.h>

int main(){
	
	FILE *archivo;
	int x;
	int total = 0;
	
	
	archivo = fopen("textos.txt", "w");
	
	fputc('A', archivo);	
	fputs("\nDeben dulces", archivo);
	fprintf(archivo, "\nHola Joel debe dulces: %d", total);
	
	fclose(archivo);
	return 0;
	
}
