#include "menu.h"

// Initialize games
HnefataflGame hnefataflGame;

/**
* Input function to start each game
* @param input - The input from the user
*/
void input(int input)
{
    switch (input)
    {
    case 1:
        // Call function to start Hangman
        hangman();
        break;
    case 2:
        // Call function to start Connect 4
        connect4();
        break;
    case 3:
        // Call function to start Maze
        mazeGame();
        break;
    case 4:
        // Call function to start Naughts and Crosses
		std::cout << "Comming Soon" << std::endl;
        break;
    case 5:
        // Call function to start Checkers
        std::cout << "Comming Soon" << std::endl;
        break;
    case 6:
        // Call the class to start Hnefatafl
        hnefataflGame.play();

        break;
    case 7:
        // Call function to start Sudoku
        std::cout << "Comming Soon" << std::endl;
        break;
    case 8:
        // Call function to start Word Scramble
        std::cout << "Comming Soon" << std::endl;
        break;
    case 9:
        // Call function to start Battleship
        std::cout << "Comming Soon" << std::endl;
        break;
    case 10:
        // Call function to start Minesweeper
        std::cout << "Comming Soon" << std::endl;
        break;
    case 11:
        // Call function to start Multiplayer Chess
        std::cout << "Comming Soon" << std::endl;
        break;
    case 13:
        // Exit the program
        exit(0);
        break;
    default:
        std::cerr << "Invalid input! Please select a valid option." << std::endl;
        break;
    }
}

/**
* Menu function for MiniGame Madness
*/
/**
 * Menu function for MiniGame Madness
 * @return void
 */
void menu()
{
    try
    {
        // Clear the console
        std::system("cls");

        // Define menu options
        std::string text[] = {
            "MINIGAME MADNESS",
            "1. Hangman",
            "2. Connect 4",
            "3. Maze",
            "4. Naughts and Crosses",
            "5. Checkers",
            "6. Hnefatafl",
            "7. Sudoku",
            "8. Word Scramble",
            "9. Battleship",
            "10. Minesweeper",
            "11. Multiplayer Chess",
            "13. Exit",
            "Enter a number to select a game: "
        };

        // Print menu options to the console
        int width = 50; // Adjust width based on your console
        int startY = 2; // Starting row position
        for (int i = 0; i < sizeof(text) / sizeof(text[0]); i++)
        {
            int padding = (width - text[i].length()) / 2;
            std::cout << std::string(padding, ' ') << text[i] << std::endl;
        }

        // Wait for user input
        while (true)
        {
            if (_kbhit())
            {
                int ch = _getch() - '0';  // Convert char to int
                input(ch);
            }
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}
