#include<stdio.h>
/*
 Este programa permite escribir dentro de un archivo,
de ser posible, a trav�s de la funci�n fprintf.
*/
int main() {
 FILE *archivo;
 char escribir[] = "Escribir cadena en archivo mediante fprinft. \nFacultadde Ingenier�a.\n";
 archivo = fopen("archivo.txt", "r+");
 if (archivo != NULL) {
 fprintf(archivo, escribir);
 fprintf(archivo, "%s", "UNAM\n");
 fclose(archivo);
 } else {
 printf("El archivo no existe o no se tiene permisos de lectura /escritura.\n");
 }
 return 0;
}
