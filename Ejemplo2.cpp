#include<stdio.h>
/*
 Este programa permite lee el contenido de un archivo, de ser posible, a
trav�s de la funci�n fgets.
*/
int main() {
 FILE *archivo;
 char caracteres[50];
 archivo = fopen("archivo.txt", "r");

 if (archivo != NULL) {
 printf("El archivo se abri� correctamente.");
 printf("\nContenido del archivo:\n");
 while (feof(archivo) == 0) {
 fgets (caracteres, 50, archivo);
 printf("%s", caracteres);
 }
 fclose(archivo);
 }

 return 0;
}
