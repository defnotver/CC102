#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD, ricePricePound, coffePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeQty, milkQty;
	float usdTopPhp, poundToPhp;
	
	cout << "Enter the price sugar (USD)\t:\t";
	cin >> sugarPriceUSD;
	cout << "enter the Price of rice (Pound)\t:\t";
	cin >> ricePricePound;
	cout << "Enter the Price of coffe (USD)\t:\t";
	cin >> coffePriceUSD;
	cout << "Enter the Price of milk (USD)\t:\t";
	cin >> milkPriceUSD;
	
	cout << "Enter the quantity of sugar\t:\t";
	cin >> sugarQty;
	cout << "Enter the quantity of rice\t:\t";
	cin >> riceQty;
	cout << "Enter the quantity of sardines\t:\t";
	cin >> sardinesQty;
	cout << "Enter the quantity of coffe\t:\t";
	cin >> coffeQty;
	cout << "Enter the quantity of milk\t:\t";
	cin >> milkQty;
	 
	  sugarinPHP = sugarpriceUSD * USDto PHP * sugarQty;
	  riceinPHP = ricePricePound * PoundstoPHP * riceQty;
	  sardinesinPHP = sardinesPricePound * PoundstoPHP * sardinesQty;
	
	 return 0;

}