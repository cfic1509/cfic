#include "iostream.h"
#include "conio.h"
#include "stdio.h"

int main()
{
	int N, cant, sum1, sum2, sum3, sum4, i, cont1, cont2, cont3, cont4, Prom, sumP; sum1=sum2=sum3=0; cont1=cont2=cont3=cont4=0; sumP=0;
	char opc='s';
	do
	{
      clrscr();
   	gotoxy(3,3); printf("Digite la cantidad de numeros que desea contar: "); scanf("%d", &cant);

      while(cant<1)
      {
         clrscr();
      	gotoxy(3,3);printf("Digite la cantidad de numeros que desea contar: "); scanf("%d",&cant);
      }
         gotoxy(4,8);printf("Escriba un numero: ");

         int y=10;
	    	for(i=1;i<=cant;i++)
   	 	{
    		gotoxy(6,y); scanf("%d",&N);

         	if(N<15)
            	{sum1=sum1+N;
               cont1++;}
            else
            {
            	if(N>50)
            		{sum3=sum3+N;
                  cont3++;}
            	else
            		{
                  if((N>=25)&&(N<=45))
                  	{sum2=sum2+N;
                  	cont2++;}
                  else
                  	{cont4++;}
                  }
            }
            y+=1;
            sumP=sumP+N;
         }

         Prom=sumP/cant;
         if(Prom<15)
            	{gotoxy(30,18); printf("ASAMBLEA");}
            else
            {
            	if(Prom>50)
            		{gotoxy(30,18); printf("ASAMBLEA");}
            	else
            		{
                  if((Prom>=25)&&(Prom<=45))
                  	{gotoxy(30,18); printf("ASAMBLEA");}
                  else
                  {gotoxy(30,18); printf("CLASE");}
                  }
            }

		gotoxy(30,10); printf("La suma de los numeros menores que 15 es: %d ",sum1); printf("y tiene %d numeros en ese rango.",cont1);
		gotoxy(30,12); printf("La suma de los numeros entre 25 y 45 es: %d ",sum2); printf("y tiene %d numeros en ese rango.",cont2);
		gotoxy(30,14); printf("La suma de los numeros mayores que 50 es: %d ",sum3); printf("y tiene %d numeros en ese rango.",cont3);
      gotoxy(30,16); printf("Tiene %d numeros fuera de los rangos.",cont4);
      gotoxy(30,20); printf("El promedio es %d ", Prom);

      gotoxy(30,22); printf("Desea correr denuevo el programa (S/N) "); scanf("%s",&opc);
	}
   while((opc=='s')||(opc=='S'));

   clrscr();
   gotoxy(50,14); printf("...Hasta la proxima...");

getch();
}


