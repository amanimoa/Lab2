#include "messagePrinter.h"
#include <map>
//#include <set>
using namespace std;

Logger::Logger() {
   
  }
    
bool Logger::shouldPrintMessage(int timestamp, string message) {
	//std::map<string , int> exist;
	std::map<string , int>::iterator it = exist.find(message);  
    //std::set<string> exist; 
    //set<string>::iterator it = exist.begin();
     
    if(it == exist.end()){ //it means it was not printed
    	exist.insert(std::make_pair(message, timestamp));
        return true;
    }
    
    
	 if((timestamp-it->second) >= 10)
	{
		exist.erase(message);
		exist.insert(std::make_pair(message, timestamp));
		//exist[message] = timestamp;
		return true;
	} 

	

		return false; 
	
}
