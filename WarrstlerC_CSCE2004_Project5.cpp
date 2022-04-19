// WarstlerC_CSCE2004_Project5.cpp : This file contains the 'main' function. Program execution begins and ends there.

//---------------------------------------------------
// Purpose: Implement menu-based spreadsheet program.
// Author:  TODO - ADD NAME HERE
//---------------------------------------------------

#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

// Global constants
const int ROWS = 9;
const int COLS = 9;

// Read and convert location string to row col value
void getLocation(int& row, int& col)
{
    // Initialize variables
    row = -1;
    col = -1;

    // Loop until a valid location is entered
    while (row < 0 || row > ROWS - 1 || col < 0 || col > COLS - 1)
    {
        // Get user input
        cout << "Enter location between A1 and I9: " << endl;
        string location = "";
        cin >> location;

        // Calculate col between 0 and COLS-1
        if (location.length() > 0)
            col = location[0] - 'A';

        // Print error message
        if (col < 0 || col > COLS - 1)
            cout << "Error: column should be between A and I" << endl;

        // Calculate row between 0 and ROWS-1
        if (location.length() > 1)
            row = location[1] - '1';

        // Print error message
        if (row < 0 || row > ROWS - 1)
            cout << "Error: row should be between 1 and 9" << endl;
    }
}

// Print command menu to user and get input
int getMenuChoice()
{
    // Print command menu
    cout << "Welcome to MiniCalc the PF1 Killer App\n"
        << "   0) Quit the program\n"
        << "   1) Store specified data value\n"
        << "   2) Store random data values\n"
        << "   3) Calculate minimum of data values\n"
        << "   4) Calculate maximum of data values\n"
        << "   5) Calculate sum of data values\n"
        << "   6) Calculate product of data values\n"
        << "   7) Calculate average of data values\n"
        << "   8) Calculate standard deviation of data values\n";

    // Initialize variables
    string input = "";
    int command = -1;

    // Loop until a valid location is entered
    while (command < 0 || command > 8)
    {
        // Get user input
        cout << "Enter command: ";
        cin >> input;
        if (input.length() == 1)
            command = input[0] - '0';

        // Print error message
        if (command < 0 || command > 8)
            cout << "Error: command should be between 0 and 8" << endl;
    }

    return command;
}

// TODO - ADD FUNCTIONS HERE
int storeSpec(int location)
{
    float value;

    cout << "Please enter the value you would like to store: ";
    cin >> value;

    return;
}

int storeRand()
{

}

int calcMin()
{

}

int calcMax()
{

}

int calcSum()
{

}

int calcProduct()
{

}

int calcAvg()
{

}

int calcSD()
{

}

// Main program
int main()
{
    // Initialize spreadsheet array
    float data[ROWS][COLS];
    for (int row = 0; row < ROWS; row++)
        for (int col = 0; col < COLS; col++)
            data[row][col] = 0;

    int row, col;
    // Loop processing menu commands
    int command = getMenuChoice();
    while (command != 0)
    {
        // TODO - ADD CODE HERE
        if (command == 1)
        {
            storeSpec(getLocation(row, col));

        }
        else if (command == 2)
        {
            storeRand();
        }
        else if (command == 3)
        {

        }
        else if (command == 4)
        {

        }
        else if (command == 5)
        {

        }
        else if (command == 6)
        {

        }
        else if (command == 7)
        {

        }
        else if (command == 8)
        {

        }

        for (int row = 0; row < ROWS; row++)
            for (int col = 0; col < COLS; col++)
                cout << data;

        // Get next command
        command = getMenuChoice();
    }
    return 0;
}
