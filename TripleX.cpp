#include <iostream>

int main()
{
    // Print welcome message to terminal
    std::cout << "Well, well, well, Mr. Anderson we meet again.  You thought it was over, but I never truly left.  You knew that, didn't you Neo.";
    std::cout << std::endl;
    std::cout << "This time however, you lose.  I have lit a fuse if you will, that will soon reach every explosive currently connected.  The reset has begun....";
    std::cout << std::endl;
    std::cout << "...Neo, its Morpheus. The time has come once again.  Use your mind Neo, crack the code...you're our only hope..";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 10;

    /*
    this is for multi line
    comments
    */

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int PlayerGuess;

    return 0;
}