#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Who are you? ";
    cin >> name;

    string greeting = "Hello, " + name;
    if (name == "Andrew") {
        greeting += ", I know you";
    }
    cout << greeting;

    // --
    cout << endl;
    cout << endl;
    // -- 

    int len = greeting.length();
    cout << "\"" + greeting + "\" is " << len << " charecters long." << endl;

    auto first_space = greeting.find(' ');
    string first_initial = greeting.substr(first_space +1, 1);
    cout << "Your name begins with: " + first_initial << endl;




    return 0;
}  