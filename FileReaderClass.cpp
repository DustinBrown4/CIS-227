#include "FileReader.h"
#include <string>
#include <fstream> //for file
#include <iostream>
#include <stdlib.h> //for random
#include <vector>
/*File Reader Class
* Authors: Ben"Jamin" VanderHart, Dustin "D-dawg" Brown
*	Class: CIS 227
*	Date: Due 2/10/2021
*	Purpose:
*		To allow users of the app to read a txt file for a selection of words.
* 
* * * * possibly add more file choices for more difficulty options/add difficulty to menu -- future * * * *
*/

//function generates random word taken from a file
string FileReader::sendWord() {
	string userWord;
	ifstream inFile;
	vector<string> fileWords;
	srand(time(NULL));

	inFile.open("file.txt");

	//check for error
	if (inFile.fail()) {
		cerr << "Error Opening file" << endl;
		exit(1);
	}
	//populate vector with words from file
	while (getline(inFile, userWord)) fileWords.push_back(userWord);
	//selects a "random" word
	userWord = fileWords[rand() % fileWords.size()];
	inFile.close();

	//convert letters from file to lowercase
	char c;
	int i = 0;
	for (i; i < userWord.size(); ++i) {
		c = userWord[i];
		c = tolower(c);
		userWord[i] = c;
	}
	return userWord;


	
}
