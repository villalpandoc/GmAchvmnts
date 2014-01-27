#ifndef COMMANDS_H
#define COMMANDS_H

#include <iostream>

using namespace std;

	bool validInput(std::string input);

class Commands
{
public: 
	void mainMenu();
	void addPlayer(std::string player);
	void addGamer();
	void addAchvmnt();
	void addPlays();
	void addFriends();
	void achvmnts();
	void frndsWhoPlay();
	void compPlayers();
	void smmrzPlayer();
	void smmrzGame();
	void smmrzAchvmnt();
	void achvmntRank();

	
};

#endif // !COMMANDS_H