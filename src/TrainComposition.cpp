// A TrainComposition is built by attaching and detaching wagons from the left and the right sides.
// For example, if we start by attaching wagon 7 from the left followed by attaching wagon 13,
// again from the left, we get a composition of two wagons (13 and 7 from left to right).
// Now the first wagon that can be detached from the right is 7 and the first that can be detached from the left is 13.
// Implement a TrainComposition that models this problem.
// https://www.testdome.com/questions/cpp/train-composition/18036?visibility=1
#import "TrainComposition.h"


int trainComposition::attachWagonFromLeft(const int& wagonId)
{
	train.push_front(wagonId);
}
int trainComposition::attachWagonFromRight(const int& wagonId)
{
	train.push_back(wagonId);
}
int trainComposition::detachWagonFromLeft()
{
	int result = train.front();
	train.pop_front();
	return result;
}
int trainComposition::detachWagonFromright()
{
	int result = train.back();
	train.pop_back();
	return result;
}

int main()
{
	trainComposition TC;
	TC.attachWagonFromLeft(7);
	TC.attachWagonFromRight(13);
	std::cout << TC.detachWagonFromLeft()<<std::endl;
	std::cout << TC.detachWagonFromright()<<std::endl;
}
