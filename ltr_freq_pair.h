//Patrick Whetsel
//CSCI 2312 Fall 2012
//ltr_freq_pair.h
//to be included with pa5.cpp
//definition and implementation of ltr_freq_pair struct

#ifndef _ltr_freq_pair_h
#define _ltr_freq_pair_h

struct ltr_freq_pair
{
	//data members
	char letter;
	float freq;
	
	
	//member functions
	
	//setters
	//Pre:char to set letter member
	//Post:member letter is set to input char
	void setLetter (char ltr)
	{
		letter = ltr;
	}
	//Pre:float to set freq member
	//Post:member freq is set to input float
	void setFreq (float frequency)
	{
		freq = frequency;
	}

	//getters
	//Pre:member letter has a value
	//Post:returns value for member letter
	const char getLetter()
	{
		return letter;
	}
	//Pre:member freq has a value
	//Post:returns value for member freq
	const float getFreq()
	{
		return freq;
	}	
};

#endif