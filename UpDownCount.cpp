#include<iostream>
using namespace std;
#include "UpDownCount.h"

// constructor
UpDownCount::UpDownCount(int initial, int final)
{
	start = initial;
	stop = final;
}

// destructor
UpDownCount::~UpDownCount()
{

}
// sets the starting value
void SetStart(int start)
{  
 start = start;
}
// get the initial value 
int UpDownCount::GetStart()
{
	return start;
}
//sets the final value
void UpDownCount::SetStop(int stop)
{
	stop = stop;
}
// get the final value 
int UpDownCount::GetStop()
{
	return stop;
}

// fuction which counts up or down in a selected range 
int UpDownCount::Digit(int start, int stop)
{
	if ((start < stop && start!=0))
	{   
		start += 3;
	}
	else if (start > stop)     // checks if the starting value is greater than the stop value and decrement if so
	{   
		stop = start;
		stop -= 2;
	}
	else
		Default(start, stop);
}

//fuction default which counts from 0 up to 255 and back from 255 down to 0 with an increment and decrement of 1 and -1 respectively 
void UpDownCount::Default(int start, int stop)
{
	if ((start =0 && stop=255))
	{
		start += 1;
	}
	stop -= 1;
	
}