#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Card{
	private:
		string color;
		string shape;
		int number;
		string symbol;
	public:
		Card();
		Card(string in_Shape, int in_Number);
		void setCardShape(string in_Shape);
		void setCardNumber(int in_Number);
		void setCardSymbol(int in_Symbol);
		void setCardColor(string in_Color);
		string getCardColor();
		string getCardShape();
		int getCardNumber();
		string  getCardSymbol();
		void print();
};
