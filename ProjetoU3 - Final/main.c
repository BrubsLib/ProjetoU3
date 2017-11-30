#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include "funcoes.h"
#include "funcoes.h"

int main(void)
{
    /** Esta e a funcao
        *main do programa.
    */
    FILE *arquivoA;
    FILE *arquivoB;
    FILE *arquivoC;
    int op=0;
    int nla=0,nca=0,nlb=0,ncb=0;
    float mc[50][50]= {0};
    float ma[50][50];
    float mb[50][50];
    int ap=0,bp=0,cp=0;
    while(op!=16)
    {
        menu();
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("\n");
            printf("==Tamanho da matriz A==\n");
            printf("\n");
            printf("Numero de linhas: ");
            scanf("%d",&nla);
            printf("Numero de colunas: ");
            scanf("%d",&nca);
            printf("\n");
            break;

        case 2:
            printf("\n");
            printf("==Tamanho da matriz B==\n");
            printf("\n");
            printf("Numero de linhas: ");
            scanf("%d",&nlb);
            printf("Numero de colunas: ");
            scanf("%d",&ncb);
            printf("\n");
            break;

        case 3:
            if(nca==0 && nla==0)
            {
                printf("Matriz sem tamanho definido. Utilize a opcao 1.\n");
            }
            else
            {
                op3(ma,nla,nca);
                ap=1;
            }
            break;
        case 4:
            if(ncb==0 && nlb==0)
            {
                printf("Matriz sem tamanho definido. Utilize a opcao 2.\n");
            }
            else
            {
                op4(mb,nlb,ncb);
                bp=1;
            }
            break;
        case 5:
            if(nca==0 && nla==0)
            {
                printf("Matriz sem tamanho definido. Utilize a opcao 1.\n");
            }
            else
            {
                printf("\n");
                printf("==>Digite os numeros para preencher a matriz:");
                op5(ma,nla,nca);
                ap=1;
            }

            break;
        case 6:
            if(ncb==0 && nlb==0)
            {
                printf("Matriz sem tamanho definido. Utilize a opcao 2.\n");
            }
            else
            {
                printf("\n");
                printf("==>Digite os numeros para preencher a matriz:");
                op6(mb,nlb,ncb);
                bp=1;
            }

            break;
        case 7:
            if(ap!=0)
            {
                if(bp!=0)
                {
                    op7(ma,nla,nca,mb,nlb,ncb,mc);
                    cp=1;
                }
                else
                {
                    printf("Matriz B nao preenchida. Utilize a opcao 4 ou 6.");
                }
            }
            else
            {
                printf("Matriz A nao preenchida. Utilize a opcao 3 ou 5.");
            }
            break;
        case 8:
            if(ap!=0)
            {
                if(bp!=0)
                {
                    op8(ma,nla,nca,mb,nlb,ncb,mc);
                    cp=1;
                }
                else
                {
                    printf("Matriz B nao preenchida. Utilize a opcao 4 ou 6.");
                }
            }
            else
            {
                printf("Matriz A nao preenchida. Utilize a opcao 3 ou 5.");
            }

            break;
        case 9:
            if(ap!=0)
            {
                if(bp!=0)
                {
                    op9(ma,nla,nca,mb,nlb,ncb,mc);
                    cp=1;
                }
                else
                {
                    printf("Matriz B nao preenchida. Utilize a opcao 4 ou 6 .");
                }
            }
            else
            {
                printf("Matriz A nao preenchida. Utilize a opcao 3 ou 5.");
            }

            break;
        case 10:
            if(ap==0)
            {
                printf("Matriz A nao foi preenchida. Utilize a opcao 3 ou 5.\n");
            }
            else
            {
                op10(ma,nla,nca);
            }
            break;
        case 11:
            if(bp==0)
            {
                printf("Matriz B nao foi preenchida. Utilize a opcao 4 ou 6.\n");
            }
            else
            {
                op11(mb,nlb,ncb);
            }
            break;
        case 12:
            if(cp==0)
            {
                printf("Matriz C nao foi preenchida. Utilize a opcao 7, 8 ou 9.\n");
            }
            else
            {
                op12(mc,nla,ncb);
            }

            break;
        case 13:
            if(ap==0)
            {
                printf("Matriz A nao foi preenchida. Utilize a opcao 3 ou 5.\n");
            }
            else
            {
                op13(ma,nla,nca);
            }
            break;
        case 14:
            if(bp==0)
            {
                printf("Matriz B nao foi preenchida. Utilize a opcao 4 ou 6.\n");
            }
            else
            {
                op14(mb,nlb,ncb);
            }
            break;
        case 15:
            if(cp==0)
            {
                printf("Matriz  C nao foi preenchida. Utilize a opcao 7, 8 ou 9.\n");
            }
            else
            {
                op15(mc,nla,ncb);
            }
            break;
        case 16:
            printf("SAIR\n");

            break;

        default:
            printf("opcao invalida,tente novamente\n");
        }
    }

    return 0;
}

