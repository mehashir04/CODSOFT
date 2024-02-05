#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess, tries = 0;

    cout << "Welcome to Guess My Number Game!\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber)
            cout << "Too high!\n\n";
        else if (guess < secretNumber)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! You guessed it in " << tries << " tries!\n";

    } while (guess != secretNumber);

    return 0;
}
