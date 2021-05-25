#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Print welcome message to terminal
    std::cout << "\n\nWell, well, well, Mr. Anderson we meet again.  You thought it was over, but I never truly left.  You knew that, didn't you Neo...\n";
    std::cout << "This time however, you lose.  I have lit a fuse if you will, that will soon reach every explosive currently connected.  The reset has begun....\n";
    std::cout << "...Neo, its Morpheus. The time has come once again.  Use your mind Neo, crack the code...you're our only hope..\n";
    std::cout << "\nLevel " << Difficulty;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 10;

    /*
    this is for multi line
    comment example
    */

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to terminal

    std::cout << "\n\n+ There are 3 numbers in the code\n";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check to see if guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n-Morpheus- \"You Saved US! I can't believe you saved us again!!\n\"";
        return true;
    }
    else
    {
        std::cout << "\n-Agent Smith- \"MUHAHAHAhahaha, BOOM. Your finished Neo.  I. AM. INEVITABLE.\"";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    return 0;
}