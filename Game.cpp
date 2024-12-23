#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Create Player Input String
    std::string Player;
    // Create Score
    int Score = 0;
    // Create Variables to determine most commonly chosen option
    // Rock
    int a = 0;
    // Scissors
    int b = 0;
    // Paper
    int c = 0;
    // Make randomNumber random
    bool r = true;
    int randomNumber = 0;
    // Create Loop
    while (true)
    {
        //Ask for Input
        std::cout << "Rock, Paper, Scissors? \n";
        // Input Rock, Paper, or Scissors
        std::cin >> Player;
        // If randomNumber is random
        if (r)
        {
            // Seed the random number generator with the current time
            std::srand(std::time(0));
            // Generate a random number between 1 and 3
            int randomNumber = std::rand() % 3 + 1;
        }
        // 1 = Scissors, 2 = Rock, 3 = Paper
        // If Input is Rock
        if (Player == "Rock"||Player == "rock")
        {
            a = a + 1;
            // If Computor Chooses Scissors
            if (randomNumber == 1)
            {
                std::cout << "Rock > Scissors, you win! \n";
                Score = Score + 1;
            }
            // If Computor Chooses Rock
            else if (randomNumber == 2)
            {
                std::cout << "Rock = Rock, tie! \n";
                Score = Score;
            }
            // If Computor Chooses Paper
            else if (randomNumber == 3)
            {
                std::cout << "Rock < Paper, you lose! \n";
                Score = Score - 1;
            }
        }
        // If Input is Scissors
        else if (Player == "Scissors"||Player == "scissors")
        {
            b = b + 1;
            // If Computor Chooses Scissors
            if (randomNumber == 1)
            {
                std::cout << "Scissors = Scissors, tie! \n";
                Score = Score;
            }
            // If Computor Chooses Rock
            else if (randomNumber == 2)
            {
                std::cout << "Scissors < Rock, you lose! \n";
                Score = Score - 1;
            }
            // If Computor Chooses Paper
            else if (randomNumber == 3)
            {
                std::cout << "Scissors > Paper, you win! \n";
                Score = Score + 1;
            }
        }
        // If Input is Paper
        else if (Player == "Paper"||Player == "paper")
        {
            c = c + 1;
            // If Computor Chooses Scissors
            if (randomNumber == 1)
            {
                std::cout << "Paper < Scissors, you lose! \n";
                Score = Score - 1;
            }
            // If Computor Chooses Rock
            else if (randomNumber == 2)
            {
                std::cout << "Paper > Rock, you win! \n";
                Score = Score + 1;
            }
            // If Computor Chooses Paper
            else if (randomNumber == 3)
            {
                std::cout << "Paper = Paper, tie! \n";
                Score = Score;
            }
        }
        // Make randomNumber no longer random
        r = false;
        // Output Score
        std::cout << "Score = " << Score << "\n \n";
        // Defeat Rock
        if (a>b&&a>c)
        {
            randomNumber = 3;
        }
        // Defeat Scissors
        if (b > a && b > c)
        {
            randomNumber = 2;
        }
        // Defeat Paper
        if (c > a && c > b)
        {
            randomNumber = 1;
        }
        // Make old Inputs less important
        a = a * 0.9;
        b = b * 0.9;
        c = c * 0.9;
    }


    return 0;
}
// Made by Y3sac1 on Github
