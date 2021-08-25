#include<stdio.h>
#include<stdlib.h>

int main()

{
int Dia;
		printf("introduzca un numero del 1 al 7 \n");
		scanf("%d",&Dia);
			switch (Dia)
	{
				case 1:
					puts("El dia correspondiente es lunes");
						break;
				case 2:
					puts("El dia correspondiente es martes");
						break;
				case 3:
					puts("El dia correspondiente es miercoles");
						break;
				case 4:
					puts("El dia correspondiente es jueves");
						break;
				case 5:
					puts("El dia correspondiente es viernes");
						break;
				case 6:
					puts("El dia correspondiente es sabado");
						break;
				case 7:
					puts("El dia correspondiente es domingo");
						break;
	}
		default:
					puts("error");
}