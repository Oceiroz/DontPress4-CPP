// Dont press 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int GetInput(string inputMessage);
int main()
{
    for (int x = 0; x < 10; x++)
    {
        int value = GetInput("Please enter a whole number, just do not press 4");
        cout << x + 1 << " out of " << 10 << endl;
        if (value == 4)
        {
            cout << "why did you do that?" << endl;
            Sleep(3000);
            break;
        }
        else if (value == 3 || value == 5)
        {
            cout << "ooo that was close" << endl;
        }
        else
        {
            cout << "thanks, that helps" << endl;
        }
        if (x == 9)
        {
            cout << "the robot uprising thanks you" << endl;
        }
    }
}
int GetInput(string inputMessage)
{
    int userInput = 0;
    while (true)
    {
        cout << inputMessage << endl;
        string rawInput;
        getline(cin, rawInput);
        try
        {
            userInput = stoi(rawInput);
            break;
        }
        catch (exception)
        {
            cout << "this is not a valid input" << endl;
        }

    }
    return userInput;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
