/*
    Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:
        (a) a linha 2 com a linha 8;
        (b) a coluna 4 com a coluna 10;
        (c) a diagonal principal com a secundária;
        (d) a linha 5 com a coluna 10.
    O procedimento deve retornar a matriz alterada.
*/

/*
    trocar L2 com L8 (matriz[10][10])
    {
        for (int i = 0; i < 10; i++)
        {
            int temp;
            temp = matriz[i][i];
            matriz[i][3] = matriz[i][9 - i];
            matriz[i][9] = temp;
        }
    }
*/