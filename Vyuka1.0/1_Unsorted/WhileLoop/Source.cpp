///*
//While loop
//*/
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 100;
//	//while(true)
//	while (i <= 500)
//	{
//		if (i % 3 == 0 && i % 5 == 0) {
//			cout << i<<"\n";
//		}
//		i++;
//		/*if (i > 500) {
//			break;
//		}*/
//	}
//
//	int number;
//	cout << "Number: ";
//	cin >> number;
//
//	if (number == 0) {
//		cout << "Zadal jsi nulu \n";
//	}
//	else {
//		if (number < 0) {
//			number *= -1;
//		}
//		int counter = 0;
//		while (number > 0) {
//			number /= 10;
//			counter++;
//		}
//		cout << "Pocet cislic " << counter << endl;
//	}
//
//	int reversedNumber=0;
//	cout << "Number: ";
//	cin >> number;
//	while (number!=0) {
//		reversedNumber *= 10;
//		//int lastDigit = number % 10;
//		reversedNumber += number % 10;
//		number /= 10;
//	}
//	cout << reversedNumber;
//}

#include <iostream>

using namespace std;

void main() {
	int number, pocetCislic=0, reversedNumber=0;
	cin >> number; //1234


	while (number>0)
	{
		number = number / 10; //123 ; 12; 1 ; 0
		pocetCislic++;
		//number /= 10;
	}

	cout << pocetCislic;

	cin >> number; //1234

	while (number > 0) {
		reversedNumber *= 10; //0;40;430;4320;
		reversedNumber += number % 10; //4;43;432;4321;
		number /= 10; //123;12;1;0;
	}


}