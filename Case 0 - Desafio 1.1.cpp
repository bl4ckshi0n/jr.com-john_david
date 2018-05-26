#include<stdio.h>
#include<stdlib.h>
#define HORA_AULA 15.0


int main()
{float horas_aula,horas_falta;
int creditos;

printf("digite o numero de horas de aula: \n");
scanf("%f",&horas_aula);
printf("digite o numero de creditos: \n");
scanf("%d",&creditos);
printf("digite o numero de horas de falta: \n");
scanf("%f",&horas_falta);
float aulas_tot,faltas_tot,aulas_restantes,faltas_restantes;
aulas_tot=creditos*HORA_AULA;
faltas_tot=aulas_tot*0.3;
aulas_restantes=aulas_tot-horas_aula;
faltas_restantes=faltas_tot-horas_falta;
printf("posso faltar mais %.0f aulas \ne tenho %.0f aulas restantes\n",faltas_restantes,aulas_restantes);

}
