#include<stdio.h>
/*
 Este programa permite escribir una cadena dentro de un archivo, de ser
posible, a trav�s de la funci�n fputs.
*/
int main() {
 FILE *archivo;
 char escribir[] = "Escribir cadena en archivo mediante fputs. \n\tFacultad de Ingenier�a.\n";
 archivo = fopen("archivo.txt", "r+");

 if (archivo != NULL) {
 printf("El archivo se abri� correctamente.\n");
 fputs (escribir, archivo);
 fclose(archivo);
 } else {
 printf("Error al abrir el archivo.\n");
 printf("El archivo no existe o no se tienen permisos de lectura.\n");
 }

 return 0;
}
