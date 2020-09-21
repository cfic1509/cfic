
#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
    int a,b;
    cout<<"\n\n\t";
    printf("Ingrese sus horas trabajadas: "); scanf("%d",&a);

    cout<<"\n\n\t";
    if(a<41)
    {
        b=a*20;

        cout<<"\nSu sueldo por " <<a<< " horas trabajadas es: " <<b;
    }
    else
    {
        b=800+(a-40)*30;
        cout<<"\nSu sueldo por " <<a<< " horas trabajadas es: " <<b;
    }
    cout<<"\n\n\n\n\t";

    cout<<"\n\nPresione enter para salir-...";

    getch();
    return 0;
}