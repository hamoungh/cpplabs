#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

struct item{
	string name;
};

struct player{
	int numberOfItems; 
	string name;
	item items[10];
	void addItem(item it){
		items[numberOfItems]= it;
		numberOfItems++;
	}
};

int main(){
	srand(time(NULL));
	item weapon, health, bomb; 
	weapon.name="weapon"; 
	health.name="health";
	bomb.name="bomb";
	item availableItems[]={weapon,health,bomb};

	player players[16];
	for(int i=0; i<16; i++){
		players[i].numberOfItems=0; 
		for(int j=0; j<3; j++){ // all possible pickups
			int canPickUp=rand()%2;  
			if (canPickUp==1)
				players[i].addItem(availableItems[j]);
		}
	}
	// display each player and the that is assigned to him 
	for(int i=0; i<16; i++){
		
		cout << players[i].items[0].name << endl; 
	}

	return 0;
}


