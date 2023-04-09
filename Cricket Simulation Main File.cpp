// Tab Task 7-4-23.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
// custom header file add
#include "player.h"
#include "allrounder.h"
#include "batsman.h"
#include "bowler.h"
#include "wicketkeeper.h"
using namespace std;
int main()
{
    // object for allrounder class
    allrounder a1;
    cout << a1.jersyno << "\t" << a1.name << "\t" << a1.odirat << "\t" << a1.runs << "\t" << a1.t20rat << "" << a1.testart << "\t" << a1.wickets;
    cout << endl << endl;
    // object for player class
    batsman b1;
    cout << b1.jersyno << "\t" << b1.name << "\t" << b1.odirat << "\t" << b1.runs << "\t" << b1.t20rat << "" << b1.testart;
    cout << endl << endl;
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
