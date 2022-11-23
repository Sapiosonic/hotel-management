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
	
		switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			cin>>quant;
			if(qRooms - sRooms >= quant)
			{
				sRooms += quant;
				totalRooms += quant * roomPrice;
				cout<<"\n\n\t\t"<<quant<<" Room/rooms have been alloted to you!";
			}
			else cout<<"\n\t Only "<<qRooms - sRooms<< " Rooms remaining in hotel";
		break;
				
		case 2:
			cout<<"\n\n Enter Pasta quantity:  ";
			cin>>quant;
			if(qPasta - sPasta >= quant)
			{
				sPasta += quant;
				totalPasta += quant * pastaPrice;
				cout<<"\n\n\t\t"<<quant<<" Pasta is the order!";
			}
			else cout<<"\n\t Only "<<qPasta - sPasta<< " Pastas remaining in hotel";
		break;
				
		case 3:
			cout<<"\n\n Enter Burger quantity:  ";
			cin>>quant;
			if(qBurger - sBurger >= quant)
			{
				sBurger += quant;
				totalBurger += quant * burgerPrice;
				cout<<"\n\n\t\t"<<quant<<" Burger is the order!";
			}
			else cout<<"\n\t Only "<<qBurger - sBurger<< " Burgers remaining in hotel";
		break;
				
		case 4:
			cout<<"\n\n Enter Noodles quantity:  ";
			cin>>quant;
			if(qNoodles - sNoodles >= quant)
			{
				sNoodles += quant;
				totalNoodles += quant * noodlesPrice;
				cout<<"\n\n\t\t"<<quant<<" Noodles is the order!";
			}
			else cout<<"\n\t Only "<<qNoodles - sNoodles<< " Noodles remaining in hotel";
		break;
		
		case 5:
			cout<<"\n\n Enter Shake quantity:  ";
			cin>>quant;
			if(qShake - sShake >= quant)
			{
				sShake += quant;
				totalShake += quant * shakePrice;
				cout<<"\n\n\t\t"<<quant<<" Shake is the order!";
			}
			else cout<<"\n\t Only "<<qShake - sShake<< " Shakes remaining in hotel";
		break;
		
		case 6:
			cout<<"\n\n Enter Chicken-roll quantity:  ";
			cin>>quant;
			if(qChicken - sChicken >= quant)
			{
				sChicken += quant;
				totalChicken += quant * chickenPrice;
				cout<<"\n\n\t\t"<<quant<<" Chicken-roll is the order!";
			}
			else cout<<"\n\t Only "<<qChicken - sChicken<< " Chicken remaining in hotel";
		break;
		
		case 7: 
			cout<<"\n\t\t Details of sales and collection ";
			cout<<"\n\n Number of rooms we had: "<<qRooms;
			cout<< "\n\n Number of rooms we gave for rent: "<<sRooms;
			cout<<"\n\n Remaining rooms: "<<qRooms-sRooms;
			cout<<"\n\n Total rooms collection for the day: "<<totalRooms;
			
			cout<<"\n\n Number of Pastas we had: "<<qPasta;
			cout<< "\n\n Number of Pastas we sold: "<<sPasta;
			cout<<"\n\n Remaining Pastas: "<<qPasta-sPasta;
			cout<<"\n\n Total Pasta collection for the day: "<<totalPasta;
			
			cout<<"\n\n Number of Burgers we had: "<<qBurger;
			cout<< "\n\n Number of Burger we sold: "<<sBurger;
			cout<<"\n\n Remaining Burgers: "<<qBurger-sBurger;
			cout<<"\n\n Total Burger collection for the day: "<<totalBurger;
			
			cout<<"\n\n Number of Noodles we had: "<<qNoodles;
			cout<< "\n\n Number of Noodles we sold: "<<sNoodles;
			cout<<"\n\n Remaining Noodles: "<<qNoodles-sNoodles;
			cout<<"\n\n Total Noodles collection for the day: "<<totalNoodles;
			
			cout<<"\n\n Number of Shakes we had: "<<qShake;
			cout<< "\n\n Number of Shakes we sold: "<<sShake;
			cout<<"\n\n Remaining Shakes: "<<qShake-sShake;
			cout<<"\n\n Total Shake collection for the day: "<<totalShake;
			
			cout<<"\n\n Number of Chicken-rolls we had: "<<qChicken;
			cout<< "\n\n Number of Chicken-rolls we sold: "<<sChicken;
			cout<<"\n\n Remaining Chicken-rolls: "<<qChicken-sChicken;
			cout<<"\n\n Total Chicken-roll collection for the day: "<<totalChicken;
			
			cout<<"\n\n\n Total Collection for the day: "<<totalRooms+totalPasta+totalBurger+totalNoodles+totalShake+totalChicken;
		break;
			
		case 8:
			cout<< "\n\n Bye-bye! ";
			exit(0);
		break;
				
		default:
			cout<<"\n Please select the numbers mentioned above!";
		break;
	}
	
	return 0;
}
