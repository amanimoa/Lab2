#include "healer.h"

#include <iostream>
using namespace std;

Healer::Healer(std::string name): Player(name){

}
void Healer::doAction(Player* player){
	//restore 75 HP up to the maxHP
	player->setHP(player->getHP()+75);

	if(player->getHP() >= getMaxHP()){
		player->setHP(getMaxHP());
	} 


	if(isDead()){
		cout << "The player died" <<endl; 
	}



}