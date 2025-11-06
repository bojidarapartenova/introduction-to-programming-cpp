#include <iostream>

void printBoard(char matrix[3][3])
{
    std::cout << "  1   2   3" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << " ";
        std::cout << matrix[i][0] << " | " << matrix[i][1] << " | " << matrix[i][2] << std::endl;

        if (i < 2)
        {
            std::cout << " ---+---+---" << std::endl;
        }
    }
}

bool checkWin(char matrix[3][3], char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][0] == player &&
            matrix[i][1] == player &&
            matrix[i][2] == player)
            return true;

        if (matrix[0][i] == player &&
            matrix[1][i] == player &&
            matrix[2][i] == player)
            return true;
    }

    if (matrix[0][0] == player &&
        matrix[1][1] == player &&
        matrix[2][2] == player)
        return true;

    if (matrix[0][2] == player &&
        matrix[1][1] == player &&
        matrix[2][0] == player)
        return true;

    return false;
}

bool isFull(char matrix[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] == ' ')
                return false;
    return true;
}

int main()
{
    char matrix[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    char currentPlayer = 'X';
    int row, col;

    while (true)
    {
        printBoard(matrix);

        std::cout << "It's " << currentPlayer << " turn! Type a coordinate! Ex: \"2 3\": ";
        std::cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3)
        {
            std::cout << "Invalid coordinates. Try again." << std::endl;
            continue;
        }

        row--;
        col--;

        if (matrix[row][col] != ' ')
        {
            std::cout << "Cell already taken. Try again.\n";
            continue;
        }

        matrix[row][col] = currentPlayer;

        if (checkWin(matrix, currentPlayer))
        {
            printBoard(matrix);
            std::cout << "Player " << currentPlayer << " won!" << std::endl;
            break;
        }

        if (isFull(matrix))
        {
            printBoard(matrix);
            std::cout << "It's a draw!" << std::endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}