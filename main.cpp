#include <iostream>
using namespace std;

int main() {
	
	int quant;
	int choice;
	
	const double roomPrice = 1200.0; 
	const double pastaPrice = 250.0; 
	const double burgerPrice = 120.0;
	const double noodlesPrice = 140.0; 
	const double shakePrice = 120.0; 
	const double chickenPrice = 150.0;
	
	//variables that store the quantity of rooms and food consumption per rooms
	int qRooms = 0, qPasta=0, qBurger=0, qNoodles=0, qShake=0, qChicken=0;
	
	//the number of rooms and itens per room from each category that has been sold
	int sRooms=0, sPasta=0, sBurger=0, sNoodles=0, sShake=0, sChicken=0;
	
	//the total price of rooms or foods
	int totalRooms=0, totalPasta=0, totalBurger=0, totalNoodles=0, totalShake=0, totalChicken=0;
	
	cout<<"\n\t Quantity of items we have.";
	cout<<"\n\t Rooms available: ";
	cin>>qRooms;
	cout<<"\n Quantity of pasta: ";
	cin>>qPasta;
	cout<<"\n Quantity of burger: ";
	cin>>qBurger;
	cout<<"\n Quantity of noodles: ";
	cin>>qNoodles;
	cout<<"\n Quantity of shake: ";
	cin>>qShake;
	cout<<"\n Quantity of chicken-roll: ";
	cin>>qChicken;
	
	cout<<"\n\t\t\t Please select from the menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken-roll";
	cout<<"\n7) Information regarding sales and collection";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please Enter your choice! ";
	cin>>choice;
	
	return 0;
}
