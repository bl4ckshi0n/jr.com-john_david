#include<stdio.h>
#include<stdlib.h>

void criar_valores(float mat[0][3]);
void escolha_compra(float mat[0][3],float *ptr, float *ptr2);
void lucro(float compra, float venda, float *ptr);

int main()
{
float matriz[3][3], compra,venda,mont;
float *ptr1,*ptr2,*ptr3;
criar_valores(matriz);
ptr1=&compra;
ptr2=&venda;
escolha_compra(matriz,ptr1,ptr2);
ptr3=&mont;
lucro(compra,venda,ptr3);
printf("\nlucro total %.1f\n",mont);
}

void criar_valores(float mat[0][3])
{int i,j;
float val=0;
for(i=0;i<3;i++)
{for (j=0;j<3;j++)
{val=val+200;
 mat[i][j]=val;
}
}
}
void escolha_compra(float mat[0][3],float *ptr, float *ptr2)
{float menor,maior;
int i,j;
printf("Site 0==A/nSite 1==B\n Site 2==C\n");
for(i=0;i<3;i++)
{for (j=0;j<3;j++)
 {printf("\nsite %d valor %d %f\n",i,j,mat[i][j]);
 }}
 printf("\nescolha o site(0,1,2) e o valor de compra (0,1,2):");
 scanf("%d %d",&i,&j);
 menor=mat[i][j];
*ptr=menor;
printf("\nescolha o site(0,1,2) e o valor de venda (0,1,2):");
 scanf("%d %d",&i,&j);
 maior=mat[i][j];
*ptr2=maior;
}
void lucro(float compra, float venda, float *ptr)
{float montante;
 montante=venda-compra;
*ptr=montante;
}
