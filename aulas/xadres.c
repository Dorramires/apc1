#include <stdio.h>
#include <stdlib.h>

int main() {
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };
    
    int fromRow, fromCol, toRow, toCol;
    char fromPiece, toPiece;

    while (1) {
        // Exibe o tabuleiro
        printf("\n");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
        
        // Solicita a entrada do jogador
        printf("Digite a posição da peça a mover (ex: 1 0 para mover de linha 1 coluna 0): ");
        scanf("%d %d", &fromRow, &fromCol);
        printf("Digite a posição de destino (ex: 2 0 para mover para linha 2 coluna 0): ");
        scanf("%d %d", &toRow, &toCol);
        
        // Verifica se a posição de origem é válida
        if (fromRow < 0 || fromRow >= 8 || fromCol < 0 || fromCol >= 8 || 
            toRow < 0 || toRow >= 8 || toCol < 0 || toCol >= 8) {
            printf("Movimento inválido! Tente novamente.\n");
            continue;
        }

        fromPiece = board[fromRow][fromCol];
        toPiece = board[toRow][toCol];

        // Valida o movimento básico
        if (fromPiece == ' ') {
            printf("Não há peça na posição de origem!\n");
            continue;
        }

        // Mover a peça
        board[toRow][toCol] = fromPiece;
        board[fromRow][fromCol] = ' ';
    }
    
    return 0;
}
