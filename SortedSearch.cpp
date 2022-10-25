// Implement function countNumbers that accepts a sorted vector of integers and counts the number of vector elements that are less than the parameter lessThan.
// For example, for vector v containing { 1, 3, 5, 7 }, SortedSearch::countNumbers(v, 4) should return 2 because there are two vector elements less than 4.
// https://www.testdome.com/questions/cpp/sorted-search/9880?visibility=1

#include <iostream>
#include <vector>
//#include <stdexcept>

using namespace std;

class SortedSearch
{
public:
	static int countNUmbers(vector<int> , int );

};

int SortedSearch::countNUmbers(vector<int> vect, int lessthan)
{
	auto result = lower_bound(vect.begin(), vect.end(), lessthan);

	return distance(vect.begin(), result);

}
int main()
{
	SortedSearch SS;
    vector<int> v { 1, 3, 5, 7, 9, 11, 13, 15 };
    cout << SS.countNUmbers(v,11);
}
