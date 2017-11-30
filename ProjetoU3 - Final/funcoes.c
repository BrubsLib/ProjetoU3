#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void menu()
{
    printf("\n");
    printf("==PROGRAMA PARA MANIPULACAO DE MATRIZES==\n");
    printf("\n");
    printf("(1)- Definir o tamanho da matriz A\n");
    printf("(2)- Definir o tamanho da matriz B\n");
    printf("(3)- Preencher a matriz A com valores aleatorios\n");
    printf("(4)- Preencher a matriz B com valores aleatorios\n");
    printf("(5)- Atribuir valores manualmente para os elementos da matriz A A\n");
    printf("(6)- Atribuir valores manualmente para os elementos da matriz B B\n");
    printf("(7)- Calcular A+B\n");
    printf("(8)- Calcular A-B\n");
    printf("(9)- Calcular A*B\n");
    printf("(10)- Imprimir matriz A\n");
    printf("(11)- Imprimir matriz B\n");
    printf("(12)- Imprimir matriz C\n");
    printf("(13)- Ler a matriz A de um arquivo\n");
    printf("(14)- Ler a matriz B de um arquivo\n");
    printf("(15)- Escrever a matriz C em um arquivo\n");
    printf("(16)- Sair\n");
    printf("\n");
    printf(" Digite sua operacao: ");
}
void op3(float ma[50][50], int nla, int nca)
{
    //Preencher a matriz A com valores aleatórios
    char endereco [500];
    int i,j,k,l;
    printf("\n");
    srand(time(NULL));
    for(i=0; i<nla; i++)
    {
        for(j=0; j<nca; j++)
        {
            ma[i][j] = rand()%100;
        }
    }
    printf("\nDigite o diretorio onde a matriz devera ser salva: \n");
    printf("\n");
    scanf("%s",endereco);
    FILE *arquivoA;
    arquivoA = fopen(endereco,"w");
    if(arquivoA==NULL)
    {
        printf("\n");
        printf("NAO FOI POSSIVEL SALVAR NO ARQUIVO !!!\n");
        exit(0);
    }
    else
    {
        for(k=0; k<nla; k++)
        {
            for(l=0; l<nca; l++)
            {
                fprintf(arquivoA,"%f ", ma[k][l]);
            }
            fprintf(arquivoA,"\n");
        }
        fclose(arquivoA);
    }
    printf("\n");
}
void op4(float mb[50][50], int nlb, int ncb)
{
    //Preencher a matriz B com valores aleatórios
    char endereco [500];
    int i,j,k,l;
    printf("\n");
    srand(time(NULL));
    for(i=0; i<nlb; i++)
    {
        for(j=0; j<ncb; j++)
        {
            mb[i][j] = rand()%100;
        }
    }
    FILE *arquivoB;
    printf("\nDigite o diretorio onde a matriz devera ser salva: \n");
    printf("\n");
    scanf("%s",endereco);
    arquivoB = fopen(endereco,"w");
    if(arquivoB==NULL)
    {
        printf("\n");
        printf("NAO FOI POSSIVEL SALVAR NO ARQUIVO !!!\n");
        exit(0);
    }
    else
    {
        for(k=0; k<nlb; k++)
        {
            for(l=0; l<ncb; l++)
            {
                fprintf(arquivoB,"%f ", mb[k][l]);
            }
            fprintf(arquivoB,"\n");
        }
        fclose(arquivoB);
    }
    printf("\n");
}
void op5(float ma[50][50], int nla, int nca)
{
    //Atribuir valores manualmente para os elementos da matriz A
    char endereco[500];
    int i,j,k,l;
    printf("\n");
    for(i=0; i<nla; i++)
    {
        for(j=0; j<nca; j++)
        {
            scanf ("%f", &ma[i][j]);
        }
    }
    FILE *arquivoA;
    printf("\nDigite o diretorio onde a matriz devera ser salva: \n");
    printf("\n");
    scanf("%s",endereco);
    arquivoA = fopen(endereco,"w");
    if(arquivoA==NULL)
    {
        printf("\n");
        printf("NAO FOI POSSIVEL SALVAR NO ARQUIVO !!!\n");
        exit(0);
    }
    else
    {
        for(k=0; k<nla; k++)
        {
            for(l=0; l<nca; l++)
            {
                fprintf(arquivoA,"%f ", ma[k][l]);
            }
            fprintf(arquivoA,"\n");
        }
        fclose(arquivoA);
    }
    printf("\n");

}
void op6(float mb[50][50],int nlb, int ncb)
{
    //Atribuir valores manualmente para os elementos da matriz B
    char endereco[500];
    int i,j,k,l;
    printf("\n");
    for(i=0; i<nlb; i++)
    {
        for(j=0; j<ncb; j++)
        {
            scanf ("%f", &mb[i][j]);
        }
    }
    FILE *arquivoB;
    printf("\nDigite o diretorio onde a matriz devera ser salva: \n");
    printf("\n");
    scanf("%s",endereco);
    arquivoB = fopen(endereco,"w");
    if(arquivoB==NULL)
    {
        printf("\n");
        printf("NAO FOI POSSIVEL SALVAR NO ARQUIVO !!!\n");
        exit(0);
    }
    else
    {
        for(k=0; k<nlb; k++)
        {
            for(l=0; l<ncb; l++)
            {
                fprintf(arquivoB,"%f ", mb[k][l]);
            }
            fprintf(arquivoB,"\n");
        }
        fclose(arquivoB);
    }
    printf("\n");

}
void op7(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50])
{
    //A+B
    //é preciso que todas elas tenham o mesmo número de linhas e de colunas

    if(nla==nlb && nca==ncb)
    {
        //soma

        int i,j;
        for(i=0; i<nla; i++)
        {
            for(j=0; j<nca; j++)
            {
                mc[i][j]=ma[i][j]+mb[i][j];
            }
        }
        /*printf("Soma das matrizes A e B:\n");
        for(i=0;i<nla;i++){
            for(j=0;j<nca;j++){
                printf("%d ",mc[i][j]);
            }
            printf("\n");
        }*/
    }
    else
    {
        printf("Nao e possivel somar matrizes com tamanhos diferentes.");
    }
}
void op8(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50])
{
    //A-B
    //é preciso que todas elas tenham o mesmo número de linhas e de colunas

    if(nla==nlb && nca==ncb)
    {
        //subtração

        int i,j;
        for(i=0; i<nla; i++)
        {
            for(j=0; j<nca; j++)
            {
                mc[i][j]=ma[i][j]-mb[i][j];
            }
        }
        /*printf("Subtracao das matrizes A e B:\n");
        for(i=0;i<nla;i++){
            for(j=0;j<nca;j++){
                printf("%d ",mc[i][j]);
            }
            printf("\n");
        }*/
    }
    else
    {
        printf("Nao e possivel subrair matrizes com tamanhos diferentes.");
    }
}

void op9(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50])
{
    //Calcular A*B
    //o número de colunas da primeira matriz é igual ao número de linhas da segunda matriz
    int i,j,k;

    if(nca==nlb)
    {

        for(i=0; i<nla; i++)
        {
            for(j=0; j<ncb; j++)
            {
                mc[i][j]=0;
            }

        }
        for (i=0; i<nla; i++)
        {
            for (j=0; j<nla; j++)
            {
                for (k=0; k<nca; k++)
                {
                    mc[i][j] = mc[i][j] + (ma[i][k] * mb[k][j]);

                }

            }

        }
        /*printf("Multiplicacao das matrizes A e B:\n");
        for(i=0;i<nla;i++){
            for(j=0;j<ncb;j++){
                printf("%d ",mc[i][j]);
            }
            printf("\n");
        }*/

    }
    else
    {
        printf("Nao e possivel multiplicar essas matrizes. O numero de linhas da matriz B e diferente do numero de colunas da matriz A.");
    }

}

void op10(float ma[50][50], int nla, int nca)
{
    //Imprimir matriz A
    int i,j;
    printf("\n");
    printf("MATRIZ A\n");
    printf("\n");
    for(i=0; i<nla; i++)
    {
        for(j=0; j<nca; j++)
        {
            printf("%f ",ma[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void op11(float mb[50][50], int nlb, int ncb)
{
    //Imprimir matriz B
    int i,j;
    printf("\n");
    printf("MATRIZ B\n");
    printf("\n");
    for(i=0; i<nlb; i++)
    {
        for(j=0; j<ncb; j++)
        {
            printf("%f ",mb[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void op12( float mc[50][50],int nla,int ncb)
{
    //Imprimir matriz C

    int i,j;
    printf("\n");
    printf("MATRIZ C\n");
    printf("\n");
    for(i=0; i<nla; i++)
    {
        for(j=0; j<ncb; j++)
        {
            printf("%f ",mc[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void op13(float ma[50][50], int nla, int nca)
{
//Ler a matriz A de um arquivo
    char endereco[500];
    int i,j;
    FILE *arquivoA;
    printf("\nDigite o diretorio onde a matriz devera ser lida: \n");
    printf("\n");
    scanf("%s",endereco);
    arquivoA = fopen(endereco,"r");
    if (arquivoA == NULL)
    {
        printf("\n");
        printf("Nao foi possivel abrir o arquivo !\n");
        exit(0);
    }
    else
    {
        for(i=0; i<nla; i++)
        {
            for(j=0; j<nca; j++)
            {
                fscanf(arquivoA,"%f",&ma[i][j]);
            }
        }
        printf("\n");
        printf("Matriz A:\n");
        printf("\n");
        for(i=0; i<nla; i++)
        {
            for(j=0; j<nca; j++)
            {
                printf("%f ",ma[i][j]);
            }
            printf("\n");
        }

    }

}

void op14 (float mb[50][50], int nlb, int ncb)
{
//Ler a matriz B de um arquivo
    char endereco[500];
    int i,j;
    FILE *arquivoB;
    printf("\nDigite o diretorio onde a matriz devera ser lida: \n");
    printf("\n");
    scanf("%s",endereco);
    arquivoB = fopen(endereco,"r");
    if (arquivoB == NULL)
    {
        printf("\n");
        printf("Nao foi possivel abrir o arquivo !\n");
        exit(0);
    }
    else
    {
        for(i=0; i<nlb; i++)
        {
            for(j=0; j<ncb; j++)
            {
                fscanf(arquivoB,"%f",&mb[i][j]);
            }
        }
        printf("\n");
        printf("Matriz B:\n");
        printf("\n");
        for(i=0; i<nlb; i++)
        {
            for(j=0; j<ncb; j++)
            {
                printf("%f ",mb[i][j]);
            }
            printf("\n");
        }

    }

}
void op15(float mc[50][50],int nla,int ncb)
{
    char endereco[500];
    int i,j;
    FILE *arquivoC;
    printf("\nDigite o diretorio onde a matriz devera ser salva: \n");
    printf("\n");
    scanf("%s",endereco);
    arquivoC = fopen(endereco,"w");
    if(arquivoC==NULL)
    {
        printf("\n");
        printf("NAO FOI POSSIVEL SALVAR NO ARQUIVO !!!\n");
        exit(0);
    }
    else
    {
        for(i=0; i<nla; i++)
        {
            for(j=0; j<ncb; j++)
            {
                fprintf(arquivoC,"%f ", mc[i][j]);
            }
            fprintf(arquivoC,"\n");
        }
        fclose(arquivoC);
    }
    printf("\n");


}
