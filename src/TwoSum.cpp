// Write a function that, given a vector and a target sum, returns zero-based indices of any two distinct elements
// whose sum is equal to the target sum. If there are no such elements, the function should return (-1, -1).
// For example, findTwoSum({ 1, 3, 5, 7, 9 }, 12) should return a std::pair<int, int> containing any of the following pairs of indices:

// 1 and 4 (3 + 9 = 12)
// 2 and 3 (5 + 7 = 12)
// 3 and 2 (7 + 5 = 12)
// 4 and 1 (9 + 3 = 12)
// https://www.testdome.com/questions/cpp/two-sum/9941

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace	std;

class twoSum
{
public:
    static std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum);

};

pair<int, int> twoSum::findTwoSum(const vector<int>& list, int sum)
{
	//throw std::logic_error("Waiting to be implemented");
	std::unordered_map<int, int> sumMap;
	for (size_t i=0; i < list.size(); ++i)
	{
		auto sumMapIt = sumMap.find(sum-list[i]);

		if (sumMapIt != sumMap.end())
		{
			return std::make_pair(i, sumMapIt->second);
		}
		sumMap[list[i]] = i;
	}


	return std::make_pair(-1, -1);
}



int main()
{
    std::vector<int> list;
    list.push_back(1);
    list.push_back(3);
    list.push_back(5);
    list.push_back(7);
    list.push_back(9);

    std::pair<int, int> indices = twoSum::findTwoSum(list, 12);
    std::cout << indices.first << '\n' << indices.second;
}
