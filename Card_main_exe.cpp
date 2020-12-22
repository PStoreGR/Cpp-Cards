#include "Card.h"

void random_card(){	
	
	Card obc;
	
	string shape[4] = {"hearts","diamonds","clubs","spades"};
	int number[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	
	
	srand(time(0));
	
	int num = number[rand() % 13];
	obc.setCardNumber(num);
	
	string sha = shape[rand() % 4];
	obc.setCardShape(sha);
	
	
	
	cout << "=====RANDOM CARD=====" << endl;
	cout << "=====================" << endl;
	cout << "Color : " << obc.getCardColor() << endl;
	cout << "Shape : " << obc.getCardShape() << endl;
	cout << "Number : " << obc.getCardNumber() << endl;
	cout << "Symbol : " << obc.getCardSymbol() << endl;
	cout << "=====================" << endl;
	
}






int main(){
	
	Card c1;//Exw ftiazei 1 constructor parapanw gia dokimi
	
	Card c2("hearts",13);//Arxikopoihsh trapouloxartou apo ton constructor
	
	//Arxikopoihsh trapouloxartou apo ton xrhsth
	c1.setCardNumber(1);
	c1.setCardShape("clubs");	
	c1.print();
	
	cout << endl << endl;
	
	//Ektipwsi trapouloxartou apo ton contsructor
	c2.print();
	
	cout << endl << endl;
	
	//Ektipwsi trapouloxartou me tyxaiothta
	random_card();
	
	cout << endl;
	
	system("PAUSE");
	return 0;
}
