#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char board[8][8] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'}
    };
    
    char move[5];
    int src_x, src_y, dest_x, dest_y;
    int turno = 1;  // 1 = turno das brancas, 0 = turno das pretas

    while (1) {
        int i, j;  // Declaração das variáveis fora dos loops

        // Exibir o tabuleiro
        printf("  a b c d e f g h\n");
        for (i = 0; i < 8; i++) {  // Usando a variável i declarada anteriormente
            printf("%d ", 8 - i);
            for (j = 0; j < 8; j++) {  // Usando a variável j declarada anteriormente
                printf("%c ", board[i][j]);
            }
            printf("%d\n", 8 - i);
        }
        printf("  a b c d e f g h\n");

        // Exibir de quem é a vez
        if (turno == 1) {
            printf("Vez das brancas!\n");
        } else {
            printf("Vez das pretas!\n");
        }

        // Ler o movimento
        printf("Digite seu movimento (ex: e2e4) ou 'q' para sair: ");
        scanf("%s", move);

        if (move[0] == 'q') {
            break;
        }

        // Converter o movimento para coordenadas da matriz
        src_x = 8 - (move[1] - '0');
        src_y = move[0] - 'a';
        dest_x = 8 - (move[3] - '0');
        dest_y = move[2] - 'a';

        // Função para verificar se o movimento é válido
        char peca = board[src_x][src_y];
        char destino = board[dest_x][dest_y];
        
        int movimento_valido = 0;

        // Verifica se o jogador está tentando mover uma peça do oponente
        if ((turno == 1 && islower(peca)) || (turno == 0 && isupper(peca))) {
            printf("Você só pode mover suas próprias peças! Tente novamente.\n");
            continue;  // Pula para a próxima iteração
        }

        // Verifica se o jogador está tentando capturar sua própria peça
        if ((isupper(peca) && isupper(destino)) || (islower(peca) && islower(destino))) {
            movimento_valido = 0;
        } else {
            int y, x;  // Variáveis para os loops de verificação de movimento

            // Diferenciar as peças por letras
            switch (tolower(peca)) {
                case 'p': // Peão
                    if (peca == 'P') { // Peão branco
                        if (src_x == 6 && dest_x == 4 && src_y == dest_y && board[5][src_y] == ' ' && board[4][src_y] == ' ') {
                            movimento_valido = 1; // Primeiro movimento: avança 2 casas
                        } else if (dest_x == src_x - 1 && src_y == dest_y && board[dest_x][dest_y] == ' ') {
                            movimento_valido = 1; // Avança 1 casa
                        } else if (dest_x == src_x - 1 && abs(dest_y - src_y) == 1 && islower(destino)) {
                            movimento_valido = 1; // Captura
                        }
                    } else { // Peão preto
                        if (src_x == 1 && dest_x == 3 && src_y == dest_y && board[2][src_y] == ' ' && board[3][src_y] == ' ') {
                            movimento_valido = 1; // Primeiro movimento: avança 2 casas
                        } else if (dest_x == src_x + 1 && src_y == dest_y && board[dest_x][dest_y] == ' ') {
                            movimento_valido = 1; // Avança 1 casa
                        } else if (dest_x == src_x + 1 && abs(dest_y - src_y) == 1 && isupper(destino)) {
                            movimento_valido = 1; // Captura
                        }
                    }
                    break;
                case 'r': // Torre
                    if (src_x == dest_x) { // Movimento na linha
                        movimento_valido = 1;
                        for (y = (src_y < dest_y ? src_y + 1 : dest_y + 1); y < (src_y < dest_y ? dest_y : src_y); y++) {
                            if (board[src_x][y] != ' ') movimento_valido = 0; // Algo bloqueia o caminho
                        }
                    }
                    if (src_y == dest_y) { // Movimento na coluna
                        movimento_valido = 1;
                        for (x = (src_x < dest_x ? src_x + 1 : dest_x + 1); x < (src_x < dest_x ? dest_x : src_x); x++) {
                            if (board[x][src_y] != ' ') movimento_valido = 0; // Algo bloqueia o caminho
                        }
                    }
                    break;
                case 'n': // Cavalo
                    if ((abs(src_x - dest_x) == 2 && abs(src_y - dest_y) == 1) || (abs(src_x - dest_x) == 1 && abs(src_y - dest_y) == 2)) {
                        movimento_valido = 1;
                    }
                    break;
                case 'b': // Bispo
                    if (abs(src_x - dest_x) == abs(src_y - dest_y)) { // Diagonal
                        movimento_valido = 1;
                        int x_step = (src_x < dest_x ? 1 : -1);
                        int y_step = (src_y < dest_y ? 1 : -1);
                        for (i = 1; i < abs(src_x - dest_x); i++) {
                            if (board[src_x + i * x_step][src_y + i * y_step] != ' ') movimento_valido = 0; // Algo bloqueia o caminho
                        }
                    }
                    break;
                case 'q': // Rainha
                    if (src_x == dest_x || src_y == dest_y) {
                        movimento_valido = 1;
                    }
                    if (abs(src_x - dest_x) == abs(src_y - dest_y)) {
                        movimento_valido = 1;
                    }
                    break;
                case 'k': // Rei
                    if (abs(src_x - dest_x) <= 1 && abs(src_y - dest_y) <= 1) {
                        movimento_valido = 1;
                    }
                    break;
            }
        }

        // Verificar se o movimento é válido
        if (movimento_valido) {
            // Mover a peça
            board[dest_x][dest_y] = board[src_x][src_y];
            board[src_x][src_y] = ' ';
            
            // Alternar o turno após um movimento válido
            turno = !turno;
        } else {
            printf("Movimento inválido! Tente novamente.\n");
        }

        // Limpar a tela (opcional)
        system("clear");  // Para Unix/Linux/Mac. No Windows, use "cls".
    }

    return 0;
}
