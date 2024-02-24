#include <stdio.h>

int N = 3;

void showBoard(int board[3][3]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (board[i][j] == 0) {
                printf("_ ");
            } else if (board[i][j] == 1) {
                printf("X ");
            } else {
                printf("O ");
            }
        }
        printf("\n");
    }
}

void InitializeBoard(int board[3][3]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            board[i][j] = 0;  // Initialize each element to 0 (or any other value you prefer)
        }
    }
}

int playMove(int board[3][3], int player) {
    int x, y;
    printf("Move for player %d\n", player);
    printf("Input x coordinate: ");
    scanf("%d", &x);
    printf("Input y coordinate: ");
    scanf("%d", &y);

    if (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == 0) {
        board[x][y] = player;
        return 1; // Valid move
    } else {
        printf("Invalid move, try again.\n");
        return 0; // Invalid move
    }
}

int checkWin(int board[3][3], int player) {
    int i, j;
    int playerWon = 0;

    // Check for a win in rows and columns
    for (i = 0; i < N; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            playerWon = 1;
            break;
        }
    }

    // Check for a win in diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        playerWon = 1;
    }

    return playerWon;
}

int isBoardFull(int board[3][3]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (board[i][j] == 0) {
                return 0; // Board is not full
            }
        }
    }

    return 1; // Board is full
}

int main() {
    int board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    showBoard(board);

    // Initialize the board with zeros
    InitializeBoard(board);

    // Show the board after initialization
    printf("\nAfter Initialization:\n");
    showBoard(board);

    int player1 = 1;
    int player2 = 2;
    int currentPlayer = player1;
    int winningPlayer = 0;

    while (!(checkWin(board, player1) || checkWin(board, player2) || isBoardFull(board))) {
        playMove(board, currentPlayer);

        // Switch players
        currentPlayer = (currentPlayer == player1) ? player2 : player1;

        showBoard(board);
    }

    // Game result
    if (checkWin(board, player1)) {
        printf("Player 1 wins!\n");
    } else if (checkWin(board, player2)) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}
