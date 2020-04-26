//****************************************************
// File: Song.h
//
// Purpose: Contains the struct definition for Song
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
#include <string>
#include "Artist.h"
#include "Time.h"
using namespace std;

struct Song {
	string title;
	Artist artist;
	Time length;
};
