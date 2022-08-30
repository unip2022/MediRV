#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração de variaveis
       float nota1;
       float nota2;
       float exame;
       float mediaAnual;
       float mediaFinal;

       //entrada
       printf("Digite a nota 1 : ");
       scanf("%f", &nota1);
       printf("Digite a nota 2 : ");
       scanf("%f", &nota2);

       //processamento
       mediaAnual = (nota1+nota2)/2;

       //criticar para saber se o aluno esta aprovado ou retido
       //saida
       if(mediaAnual    >=7 && mediaAnual <=10)
       {
           printf("APROVADO!!!");
       }

       if (mediaAnual > 10 || mediaAnual < 0)
       {
           printf("Insira notas validas.");
       }

       else
       {
           printf("Coloque a nota do seu exame : ");
           scanf("%f", &exame);
           mediaFinal = (exame + mediaAnual)/2;

           if (mediaFinal >= 5 && mediaFinal <=10)
           {
               printf("Parabens você foi aprovado.");
           }
           else
            {
               printf("Voce tera que fazer a DP.");
            }
       }

       return 0;
}
