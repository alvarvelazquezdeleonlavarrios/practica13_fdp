#include<stdio.h>
/*
 Este programa permite leer el contenido de un archivo,
de ser posible, a trav�s de la funci�n fscanf.
*/
int main() {
 FILE *archivo;
 char caracteres[50];
 archivo = fopen("archivo.txt", "r");
 if (archivo != NULL) {
 while (feof(archivo)==0){
 fscanf(archivo, "%s", caracteres);
 printf("%s\n", caracteres);
 }
 fclose(archivo);
 } else {
 printf("El archivo no existe.\n");
 }
 return 0;
}
