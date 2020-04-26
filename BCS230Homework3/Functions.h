//****************************************************
// File: Functions.h
//
// Purpose: Stores the prototypes for all of the functions that the program utilizes 
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
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Song.h"
#include "Artist.h"
#include "Time.h"

using namespace std;

void LoadSongDataFromFile(Song s[]);

void ShowSongData(Song s[]);

Time GetTotalTime(Song s[]);