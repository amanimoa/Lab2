#include "fighter.h"

#include <iostream>
using namespace std;

Fighter::Fighter(std::string name): Player(name){
	

}

void Fighter::doAction(Player* player){
	//deal 75 HP damage

	player->setHP(player->getHP()-75);


	if(isDead()){
		cout << "The player died" <<endl; 
	}


}

