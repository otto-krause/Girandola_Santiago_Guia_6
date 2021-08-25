#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char calificacion;
	printf("Introduzca una nota ");
	calificacion=getchar();
	
		switch(calificacion)
			{
				case 'A':
				case 'a':
					puts("La nota es Excelente.");
						break;
				case 'B':
				case 'b':
					puts("La nota es Buena.");
						break;
				case 'D':
				case 'd':
					puts("La nota es Suficiente.");
						break;
				case 'C':
				case 'c':
					puts("La nota es Regular.");
						break;
				case 'F':
				case 'f':
					puts("La nota es No suficiente.");
						break;
		default:
				puts("No se ingreso correctamente");
			}
		system("pause");
}
				