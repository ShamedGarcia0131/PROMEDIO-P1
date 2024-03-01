#include <stdio.h>
#include <stdlib.h>
/* Desarrolla un programa en C donde calcules el promedio de 3 calificaciones un alumno de cbtis 111 */
int main(int argc, char *argv[]) 
{
    //DATOS DE ENTRADA
    int c1,c2,c3;
    float r;
    printf("ingresa tu primera calificacion\n");
    scanf("%i" ,&c1);
    printf("ingresa tu segunda calificacion\n");
    scanf("%i" ,&c2);
    printf("ingresa tu tercera calificacion\n");
    scanf("%i" ,&c3);
    //PROCESO
    r=(c1+c2+c3)/3;
    //DATOS DE SALIDA
    printf("tu promedio es %f",r);
  system("PAUSE");	
  return 0;
}
