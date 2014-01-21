#include <iostream>

using namespace std;

class Achievements
{

public:
	Achievements(int gID, int aID, string aName, int aPts)
		:gameID(gID), achvmntsID(aID), achvmntsName(aName), achvmntsPoints(aPts){}

	int get_gameID() { return gameID; }
	int get_achvmtsID() { return achvmntsID; }
	string get_achvmntsName() { return achvmntsName; }
	int get_achvmntsPoints() { return achvmntsPoints; }

	void put_gameID(int n) { gameID = n; }
	void put_achvmtsID(int n) { achvmntsID = n; }
	void put_achvmntsName(string n) { achvmntsName = n; }
	void put_achvmntsPoints(int n) { achvmntsPoints = n; }

private:
	int gameID;
	int achvmntsID;
	string achvmntsName;
	int achvmntsPoints;
};