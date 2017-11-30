#ifndef FUNCOES_H
#define FUNCOES_H

/**
   @brief Esta funcao imprime o menu do programa.
*/
void menu();
/**
   @brief Esta funcao preenche a matriz A com valores aleatorios.
   @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A.
*/
void op3(float ma[50][50], int nla, int nca);
/**
   @brief Esta funcao preenche a matriz B com valores aleatorios.
   @param mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B.
*/
void op4(float mb[50][50], int nlb, int ncb);
/**
   @brief Esta funcao atribui valores manualmente a matriz A.
   @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A.
*/
void op5(float ma[50][50], int nla, int nca);
/**
   @brief Esta funcao atribui valores manualmente a matriz B.
   @param mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B.
*/
void op6(float mb[50][50],int nlb, int ncb);
/**
   @brief Esta funcao realiza a operação soma de matrizes: A+B. É preciso que todas elas tenham o mesmo número de linhas e de colunas. O resultado é armazenado na matriz C.
   @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A; mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B. mc e a matriz C.
*/
void op7(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50]);
/**
   @brief Esta funcao realiza a operação de subtração de matrizes: A-B. É preciso que todas elas tenham o mesmo número de linhas e de colunas. O resultado é armazenado na matriz C.
   @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A; mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B. mc e a matriz C.
 */
void op8(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50]);
/**
  @brief Esta funcao realiza a operação multiplicação de matrizes: A*B. O número de colunas da primeira matriz é igual ao número de linhas da segunda matriz. O resultado é armazenado na matriz C.
  @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A; mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B; mc e a matriz C.
 */
void op9(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50]);
/**
   @brief Esta funcao imprimi matriz A.
   @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A.
*/
void op10(float ma[50][50], int nla, int nca);
/**
   @brief Esta funcao imprimi matriz B.
   @param mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B.
*/
void op11(float mb[50][50], int nlb, int ncb);
/**
    @brief Esta funcao imprimi matriz C. Esta matriz recebe os valores que resultaram das operações de soma, subtração ou multiplicação das matrizes A e B. Ela imprimirá os valores da última operação realizada.
    @param mc e a matriz C; nla e o numero de linhas da matriz A; ncb e o numero de colunas da matriz B.
*/
void op12( float mc[50][50],int nla,int ncb);
/**
    @brief Esta funcao le a matriz A de um arquivo.
    @param ma e a matriz A; nla e o numero de linhas da matriz A; nca e o numero de colunas da matriz A.
*/
void op13(float ma[50][50], int nla, int nca);
/**
   @brief Esta funcao le a matriz B de um arquivo.
   @param mb e a matriz B; nlb e o numero de linhas da matriz B; ncb e o numero de colunas da matriz B.
*/
void op14 (float mb[50][50], int nlb, int ncb);
/**
   @brief Esta funcao salva a matriz C em um arquivo de texto.
   @param mc e a matriz C; nla e o numero de linhas da matriz A; ncb e o numero de colunas da matriz B.
*/
void op15(float mc[50][50],int nla,int ncb);

#endif // FUNCOES_H
