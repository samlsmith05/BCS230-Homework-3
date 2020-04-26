//****************************************************
// File: Functions.cpp
//
// Purpose: Contains all of the definitions of the functions for the program
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
#include "Functions.h"

//****************************************************
// Function: void LoadSongDataFromFile(Song s[])
//
// Purpose: Loads the data from songs.txt into the array
//
// Update Information
// ------------------
// 
//
//****************************************************
void LoadSongDataFromFile(Song s[]) {
	//Variables
	string file;
	ifstream fileName;
	
	cout << "Please enter the file name." << endl;
	cin >> file;

	//Opens the file
	fileName.open(file);

	//index variable 
	int i = 0;
	//reads in the data and saves it into the struct 
	do {
		getline(fileName, s[i].title);
		getline(fileName, s[i].artist.name);
		getline(fileName, s[i].artist.countryOfOrigin);
		fileName >> s[i].length.minutes;
		fileName >> s[i].length.seconds;
		fileName.ignore();
		i++;
	} while (i < 5);
	cout << endl;
	
}
//****************************************************
// Function: void ShowSongData(Song s[])
//
// Purpose: prints the data in the songs array to the console
//
// Update Information
// ------------------
// 
//
//****************************************************
void ShowSongData(Song s[]) {
	int i = 0;
	//prints all of the data onto the screen until i=5
	do {
		cout << "Title: " << s[i].title << endl;
		cout << "Artist: " << s[i].artist.name << endl;
		cout << "Country: " << s[i].artist.countryOfOrigin << endl;
		cout << "Minutes: " << s[i].length.minutes << endl;
		cout << "Seconds: " << s[i].length.seconds << endl;
		i++;
	} while (i < 5);
	cout << endl;
}
//****************************************************
// Function: Time GetTotalTime(Song s[])
//
// Purpose: calculates the total time of all of the songs 
//		in the array and returns that to the main
//
// Update Information
// ------------------
// 
//
//****************************************************
Time GetTotalTime(Song s[]) {
	//Variables
	Time total;
	int totalMinutes = 0;
	int totalSeconds = 0;
	int seconds;  

	//keeps track of the total minutes of all of the songs
	for (int i = 0; i < 5; i++) {
		totalMinutes = totalMinutes + s[i].length.minutes;
	}
	//keeps track of the total seconds of all of the songs
	for (int i = 0; i < 5; i++) {
		totalSeconds = totalSeconds + s[i].length.seconds;
	}
	//makes the minutes into seconds and adds them with the seconds of all of the songs
	seconds = (totalMinutes * 60) + totalSeconds;
	//calculates the minutes and saves it into the Time struct
	total.minutes = seconds / 60;
	//calculates the seconds and saves that into the Time struct
	total.seconds = seconds % 60;
	return total;
}

