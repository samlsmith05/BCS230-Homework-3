//****************************************************
// File: Main.cpp
//
// Purpose: Tracks song data and displays specific information onto the console
//		for which option the user chooses to see
//
// Written By: Samantha Smith
//
// Compiler: Visual Studio C++ 2017
// 
// Update Information
// ------------------
//
// 
//****************************************************

#include <iostream>
#include "Functions.h"
#include "Artist.h"
#include "Time.h"
#include "Song.h"

using namespace std;

//****************************************************
// Function: main
//
// Purpose: Entry point for program
//
// Update Information
// ------------------
// 
//
//****************************************************
int main() {
	//Songs array
	Song songs[5];
	//Variables
	int choice;

	//Loops through until the user enters 4 and calls the correct function with each choice
	do {
		cout << "Song Program\n---------------" << endl;
		cout << "1 - Load song data from file" << endl;
		cout << "2 - Show all song data" << endl;
		cout << "3 - Show total time" << endl;
		cout << "4 - Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		cout << endl;

		if (choice == 1) {
			LoadSongDataFromFile(songs);
		}
		if (choice == 2) {
			ShowSongData(songs);
		}
		if (choice == 3) {
			Time totalTime = GetTotalTime(songs);
			cout << "Total Time: " << totalTime.minutes << ":" << totalTime.seconds;
			cout << endl;
		}
	} while (choice != 4);

	return 0;
}