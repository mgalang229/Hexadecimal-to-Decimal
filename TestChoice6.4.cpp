#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int hexadecimal[100], i = 0, decimal = 0;
	char num[255];
	
	cout << "~~~~~~~~~~ Hexadecimal Conversion ~~~~~~~~~~" << endl;
	cout << "Enter Hexadecimal Number: ";
	gets(num);
	
	while (num[i] > '\0'){
	
		if(num[i] == '0'){
			hexadecimal[i] = 0;
		} else if(num[i] == '1'){
			hexadecimal[i] = 1;
		} else if(num[i] == '2'){
			hexadecimal[i] = 2;
		} else if(num[i] == '3'){
			hexadecimal[i] = 3;
		} else if(num[i] == '4'){
			hexadecimal[i] = 4;
		} else if(num[i] == '5'){
			hexadecimal[i] = 5;
		} else if(num[i] == '6'){
			hexadecimal[i] = 6;
		} else if(num[i] == '7'){
			hexadecimal[i] = 7;
		} else if(num[i] == '8'){
			hexadecimal[i] = 8;
		} else if(num[i] == '9'){
			hexadecimal[i] = 9;
		} else if(num[i] == 'A' || num[i] == 'a'){
			hexadecimal[i] = 10;
		} else if(num[i] == 'B' || num[i] == 'b'){
			hexadecimal[i] = 11;
		} else if(num[i] == 'C' || num[i] == 'c'){
			hexadecimal[i] = 12;
		} else if(num[i] == 'D' || num[i] == 'd'){
			hexadecimal[i] = 13;
		} else if(num[i] == 'E' || num[i] == 'e'){
			hexadecimal[i] = 14;
		} else if(num[i] == 'F' || num[i] == 'f'){
			hexadecimal[i] = 15;
		} else{
			cout << "Wrong Input";
			return 0;
		}
		i++;
	}
	
	int q = i-1;
	cout << endl << "\t";
	for(int k = 0; k < i; k++){
		if(k != i-1){
			cout << hexadecimal[k] << "*" << "(16^" << q << ") + ";
		} else{
			cout << hexadecimal[k] << "*" << "(16^" << q << ")";
		}
		decimal += hexadecimal[k] * pow(16, q);
		q--;
	}
	cout << "\n\n\tDecimal Value = " << decimal;
	
	return 0;
	
}
