#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int guessno = rand() % 100 + 1;
    int yournumber, attempt = 0;

    cout << "I'm thinking of a number from 1 to 100." << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> yournumber;
        attempt++;

        if (yournumber == guessno)
        {
            cout << "Correct! You got it in " << attempt << " attempt(s)." << endl;
            break;
        }
        else if (yournumber > guessno)
        {
            cout << "Too high, try again." << endl;
        }
        else
        {
            cout << "Too low, try again." << endl;
        }
    }

    return 0;
}