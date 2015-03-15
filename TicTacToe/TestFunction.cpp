#include <iostream>
using namespace std;
#include "UpDownCount.h"

int main()

{   
	UpDownCount stop = Default();
	UpDownCount start(1, 3);
	while (start && stop)
	{      
		UpDownCount Digit(start);
	}  

	system("pause");
	return 0;
}


