#ifndef Train_Composition
#define Train_Composition

#include <iostream>
#include <string>
#include <deque>

class trainComposition
{
private:
	std::deque<int> train;
public:
	int attachWagonFromLeft(const int& );
	int attachWagonFromRight(const int& );
	int detachWagonFromLeft();
	int detachWagonFromright();
};

#endif
