#include "keyboard.h"
#include <unordered_map>
#include <cmath>
#include <cstdlib> 

using namespace std;

int calculateTime(string keyboard, string word) {
	//we need to create a map with the char as the key
	std::unordered_map<char, int> all_data; 
	for(int i=0; i < (int) keyboard.size(); ++i){
		all_data[keyboard[i]] = i; //assigining value to each key

	}
	int counter = all_data[word[0]]; //store the value of the first letter/key
	for(int i=1; i< (int) word.size(); ++i){
		counter += abs(all_data[word[i]] - all_data[word[i - 1 ]]); 

	}


	return counter;
}
