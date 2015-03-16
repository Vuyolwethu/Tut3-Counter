#ifndef UpDownCount_H
#define UpDownCount_H
class UpDownCount
{
private:
	int start; 
	int stop;
public:

	UpDownCount(int start = 0, int stop = 255); // constructor with default values
		~UpDownCount();               // destructor 
	void SetStart(int initial);
	void SetStop(int final);
	int GetStart();
	int GetStop();
	int Digit(int, int);
	void Print();
	void Default(int start, int stop);

	UpDownCount& operator++(int); // declares the postfix increment operator
	UpDownCount& operator--(int); // declares the postfix decrement operator
	UpDownCount& operator++(); // prefix increment operator
	UpDownCount& operator--(); // prefix decrement operator
};
#endif