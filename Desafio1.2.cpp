#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

void transf_val_n(char entrada[30],char transf[0][5]);
void transf_notas(char entrada[30],char transf[0][2],int k, int notas[0]);
double calc_media(int notas[0],int n_provas,int n_trab, float v_provas, float v_trab,int k);

int main()
{char entrada[30],transf_val[20][5],transf_nota[20][2];
 printf("digite o valor,quantidade e notas das provas e trabalhos:\n");
 gets(entrada);
 transf_val_n(entrada,transf_val);
float v_provas,v_trab,media;
int n_provas,n_trab,k;
v_provas=atof(transf_val[0]);
v_trab=atof(transf_val[1]);
n_provas=atoi(transf_val[2]);
n_trab=atoi(transf_val[3]);
k=n_provas+n_trab;
int notas[k],i;
transf_notas(entrada,transf_nota,k,notas);
k=sizeof(notas);
media=calc_media(notas,n_provas,n_trab,v_provas,v_trab,k);
}
void transf_val_n(char entrada[30],char transf[0][5])
{int i,j,k;
k=strlen(entrada);
 for(i=0;i<11;i++)
 {if (i<4)
  {transf[0][i]=entrada[i];}
  if ((i>=4)&&(i<7))
  { transf[1][i-4]=entrada[i];

  }
  if ((i>=8)&&(i<10))
  { transf[2][i-8]=entrada[i];

  }
  if ((i>=10)&&(i<11))
  { transf[3][i-10]=entrada[i];
  }
 }
}
void transf_notas(char entrada[30],char transf[0][2],int k,int notas[0])
{
int i,j;
j=k*2;
char teste;
teste='\0';
char teste2=' ';
for (i=0;i<19;i++)
{transf[i][0]=entrada[i+12];
}
i=0;
j=0;
while(transf[i][0]!=teste)
{
if (transf[i][0]==teste2)
{i++;
continue;}
else
{
notas[j]=atoi(transf[i]);
i++;
j++;
}}
}

double calc_media(int notas[0],int n_provas,int n_trab, float v_provas, float v_trab,int k)
{float med_trab, med_provas, med_final;
med_trab=0;
med_provas=0;
int i,l;
l=0;
for(i=0;i<n_provas;i++)
{
med_provas=med_provas+notas[i];
l++;
}
for(i=l;i<l+n_trab;i++)
{
med_trab=med_trab+notas[i];

}
med_provas=(med_provas/n_provas);
med_trab=(med_trab/n_trab);
med_final=(med_provas*v_provas)+(med_trab*v_trab);
printf("media = %.1f",med_final);
}
