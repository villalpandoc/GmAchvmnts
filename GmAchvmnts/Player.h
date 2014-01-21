#include <iostream>

using namespace std;

class Player
{

public:
	Player() {}
	Player(int pID, string pName)
		:playerID(pID), playerName(pName){}

	int get_playerID() { return playerID; }
	string get_playerName() { return playerName; }

	void put_playerID(int n) { playerID = n; }
	void put_playerName(string n) { playerName = n; }

private:
	int playerID;
	string playerName;
	int playerFriends[];
	
};