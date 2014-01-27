#include <sstream>
#include <vector>
#include "Commands.h"
using namespace std;

bool validInput(std::string input)
{
	if(input == "AddPlayer"            ||
	   input == "AddGame"			   ||
	   input == "AddAchievement"	   ||
	   input == "Plays"                ||
	   input == "AddFriends"		   ||
	   input == "Achieve"              ||
	   input == "FriendsWhoPlay"       ||
	   input == "ComparePlayers"       ||
	   input == "SummarizePlayer"      ||
	   input == "SummarizeGame"		   ||
	   input == "SummarizeAchievement" ||
	   input == "AchievementRanking")
		return true;
	
	else 
		return false;
}

void Commands::mainMenu()
{
	std::string input;
	std::string buffer;
	bool inputCheck = false;

	std::cout<<"Hello and welcome to Vapor!\n";
	std::cout<<"Input:";

	std::getline (std::cin, input);
	std::stringstream ssInput (input);
	std::vector<std::string> vInputWords;

	Commands check;

	while (ssInput >> buffer){
		vInputWords.push_back(buffer);
	}

	for(std::vector<std::string>::iterator it = vInputWords.begin(); it != vInputWords.end(); ++it) {
		if(it == vInputWords.begin() && validInput(*it)){
			inputCheck = validInput(*it);
		}

		else if(inputCheck == true)
			std::cout << "case statements with valid input";

		}
		
	


}

void Commands::addPlayer(std::string player)
{

}