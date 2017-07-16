#include <iostream>
using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    bool cContinue = true;

    while (cContinue) {

        // Input
        cout << "Enter a number: "; 
        cin >> firstNumber;
        cout << "Enter another number: "; 
        cin >> secondNumber;
        cout << endl;

        // Output
        if (firstNumber < secondNumber) {
            cout << "The first number: " << firstNumber << ", is less than the second: " << secondNumber;
        } 
        else if (firstNumber == secondNumber) {
            cout << "They're equal!! " << firstNumber << " and " << secondNumber << " are equal!";
        }
        else {
            cout << "FYI: " << firstNumber << ", it's higher than: " << secondNumber;
        }

        // Role again?
        cout << endl << endl;
        cout << "Go again? [0/1]: "; int answer; cin >> answer;
        if (answer == 0) { cContinue = false; };

    }

    return 0;
}