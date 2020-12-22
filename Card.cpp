#include "Card.h"

Card::Card(string in_Shape, int in_Number){
	
	setCardShape(in_Shape);
	setCardNumber(in_Number);
	
}


Card::Card(){
	getCardShape();
	getCardNumber();
	
	number = 0;
	shape = "Wromg Shape!!";
	symbol = "\0";
	color = "\0";
}



void Card::setCardShape(string in_Shape){
	 
	if(in_Shape == "spades" || in_Shape == "clubs"){
		shape = in_Shape;
		color = "black";
		if(color == "black" && shape == "clubs"){
				color = "black";
				shape = "clubs \6";
			}
			else{
				if(color == "black" && shape == "spades"){
					color = "black";
					shape = "spades \5";
				}
			}
	}
	else if(in_Shape == "hearts" || in_Shape == "diamonds"){
			shape = in_Shape;
			color = "red";
			if(color == "red" && shape == "diamonds"){
				color = "red";
				shape = "diamonds \4";
			}
			else{
				if(color == "red" && shape == "hearts"){
					color = "red";
					shape = "hearts \3";
				}
			}
	}
	else{
		shape = "Wrong Shape!!";
	}
}


void  Card::setCardNumber(int in_Number){

	if(in_Number >= 1 && in_Number <= 13){
		number = in_Number;
		if(number == 1){
			symbol = "A";
		}
		else if(number == 2){
			symbol = "2";
		}
		else if(number == 3){
			symbol = "3";
		}
		else if(number == 4){
			symbol = "4";
		}
		else if(number == 5){
			symbol = "5";
		}
		else if(number == 6){
			symbol = "6";
		}
		else if(number == 7){
			symbol = "7";
		}
		else if(number == 8){
			symbol = "8";
		}
		else if(number == 9){
			symbol = "9";
		}
		else if(number == 10){
			symbol = "10";
		}
		else if(number == 11){
			symbol = "J";
		}
		else if(number == 12){
			symbol = "Q";
		}
		else if(number == 13){
			symbol = "K";
		}
		else{
			number = 0;
		}
	}
	else{
		number = 0;	
	}		
}
		
		
		
void  Card::setCardSymbol(int in_Symbol){
	
	if(in_Symbol >= 1 && in_Symbol <= 13){
		if(in_Symbol == 1){
			symbol = "A";
		}
		else if(in_Symbol == 2){
			symbol = "2";
		}
		else if(in_Symbol == 3){
			symbol = "3";
		}
		else if(in_Symbol == 4){
			symbol = "4";
		}
		else if(in_Symbol == 5){
			symbol = "5";
		}
		else if(in_Symbol == 6){
			symbol = "6";
		}
		else if(in_Symbol == 7){
			symbol = "7";
		}
		else if(in_Symbol == 8){
			symbol = "8";
		}
		else if(in_Symbol == 9){
			symbol = "9";
		}
		else if(in_Symbol == 10){
			symbol = "10";
		}
		else if(in_Symbol == 11){
			symbol = "J";
		}
		else if(in_Symbol == 12){
			symbol = "Q";
		}
		else if(in_Symbol == 13){
			symbol = "K";
		}
		else{
			symbol = "\0";
		}
	}
}



void  Card::setCardColor(string in_Color){
	
	if(in_Color == "red"){
		color = in_Color;
		if(shape == "hearts" || shape == "diamonds"){
			color = "red";
			if(color == "red" && shape == "diamonds"){
				color = "red";
				shape = "diamonds \4";
			}
			else{
				if(color == "red" && shape == "hearts"){
					color = "red";
					shape = "hearts \3";
				}
			}
		} 
	}
	else if(in_Color == "black"){
		color = in_Color;
		if(shape == "clubs" || shape == "spades"){
			color = "black";
			if(color == "black" && shape == "clubs"){
				color = "black";
				shape = "clubs \6";
			}
			else{
				if(color == "black" && shape == "spades"){
					color = "black";
					shape = "spades \5";
				}
			}
		} 
	}
	else{
		color = "\0";
	}
}



string  Card::getCardColor(){
	
	return color;	
}



string  Card::getCardShape(){
	
	return shape;
}



int  Card::getCardNumber(){	
	
	return number;
}



string  Card::getCardSymbol(){
	
	return symbol;	
}


void Card::print(){
	cout << "========Card=========" << endl;
	cout << "=====================" << endl;
	cout << "Color : " << getCardColor() << endl;
	cout << "Shape : " << getCardShape() << endl;
	cout << "Number : " << getCardNumber() << endl;
	cout << "Symbol : " << getCardSymbol() << endl;
	cout << "=====================" << endl;
}
