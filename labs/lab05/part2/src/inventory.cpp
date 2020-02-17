#include "inventory.h"

#include <iostream>
using namespace std;

Inventory::Inventory(){ //constructor
}


void Inventory::addItem(std::string name, int value){
	//means item is already in the inventory
/*if(Inventory.find(name) != Inventory.end()){ 
	//just update the amount
    amount = value + getNumItems(); //update global variable

}else
{		//Add an item to the inventory with the given name and amount.
	Inventory.push_back(name, value); 

}*/
    bool flag = false;
	std::vector<Item>::iterator it;

	for(it=this->begin(); it != this->end(); ++it){ 

    	if(it->name == name){
    		it->amount += value; //update global variable
    		flag = true;
    	}
	}

	if(!flag){
		
		   //Add an item to the inventory with the given name and amount.

			this->push_back(Item(name, value)); 

		

	}

}


void Inventory::removeItem(std::string name){
	//Remove all items with this name from the inventory

	/*if(Inventory.find(name) != Inventory.end()){ 
	//if you find it 
    	Inventory.erase(name); //delete it
	}*/
	std::vector<Item>::iterator it;
	for(it=this->begin(); it != this->end(); ++it){ 

    	if(it->name == name){
    		this->erase(it); //delete it
    	}

	}


}


int Inventory::getNumItems(std::string name){
	// Return the number of items with this name from the inventory.
	std::vector<Item>::iterator it;
	for(it=this->begin(); it != this->end(); ++it){ 

    	if(it->name == name){
    		return it->amount;
    	}

	}
	return -1; 


}

void Inventory::printAllItems(){
	std::vector<Item>::iterator it;
		for(it=this->begin(); it != this->end(); ++it){ 

    		cout << it->name << " " << it->amount <<endl; 

	}




}