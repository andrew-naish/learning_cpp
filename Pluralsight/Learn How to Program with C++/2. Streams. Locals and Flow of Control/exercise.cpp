#include <iostream>
using namespace std;

int main()
{
    int answer = 7;
    bool guessAgain = true;
    
    cout << "Guess the number, it's between 1 and 10: ";

    // Guesses
    while (guessAgain) {
        int guessResult; cin >> guessResult;

        if (guessResult == answer)
        {
            cout << "Correct!";
            cout << endl;
            guessAgain = false;
        } 
        
        else if (guessResult < answer)
        {
            cout << guessResult << " is too low, guess again: ";
        }

        else if (guessResult > answer)
        {
            cout << guessResult << " is too high, guess again: ";
        }
    }

    return 0;
}