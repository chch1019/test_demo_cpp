// A playlist is considered a repeating playlist if any of the songs contain a pointer to a previous song in the playlist.
//Otherwise, the playlist will end with the last song which points to NULL.
// Implement a function isRepeatingPlaylist that returns true if a playlist is repeating or false if it is not.
// For example, the following code prints "true" as both songs point to each other.
// Song* first = new Song("Hello");
// Song* second = new Song("Eye of the tiger");
// first->next(second);
// second->next(first);
// std::cout << std::boolalpha << first->isRepeatingPlaylist();
// https://www.testdome.com/questions/cpp/playlist/18029?visibility=1

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Song
{
private:
	const string name_;
	Song* nextSong;

public:
	Song(string name): name_(name), nextSong(NULL){}

	void next(Song* song)
	{
		this->nextSong = song;
	}

	bool isRepeatingPlaylist();
};

bool Song::isRepeatingPlaylist()
{
	Song* current = this;
	map <string, int> coutMap;
	for (; current != NULL; current = current->nextSong)
	{

		auto result = coutMap.insert(pair<string, int>(current->name_, 1));
		if (result.second == false)
		{
			return true;
		}

	}
	return false;
}


int main()
{

	Song* first = new Song("Hello");
	Song* Second = new Song("Zumbare");

	first->next(Second);
	Second->next(first);

	cout << boolalpha << first->isRepeatingPlaylist();






}


