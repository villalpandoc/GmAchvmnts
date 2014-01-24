#include <iostream>
#include <vector>

using namespace std;

class Games
{

public:
	Games() {}
	Games(int gID, string gName)
		:gameID(gID), gameName(gName){}

	int get_gameID() { return gameID; }
	string get_gameName() { return gameName; }

	void put_gameID(int n) { gameID = n; }
	void put_gameName(string n) { gameName = n; }

	vector<Games> gamesData;
private:
	int gameID;
	string gameName;
};