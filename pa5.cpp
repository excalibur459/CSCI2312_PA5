//Patrick Whetsel
//CSCI 2312 Fall 2012
//pa5.cpp
//Opens a user supplied text file containing a string of words seperated by whitespace.
//Program then reads the file, outputs and annotated display of the file, a table of
//the frequencies of all letters in the file, and a bar graph of the frequencies.
#include <sstream>
#include <iostream>
#include <cstdlib>
#include "darray.h"
#include "letter_frequencies.h"
#include "pa5functions.h"
#include "ltr_freq_pair.h"

int main ( int argc, char* argv[])
{
	//testing
	darray<int> test;
	std::cout << "enter an int: " << std::endl;
	int in = 0;
	std::cin >> in;
	test.push(in);
	int out = 0;
	out = test.pop();
	std::cout << "you put in: " << out << std::endl;
	//testing
}