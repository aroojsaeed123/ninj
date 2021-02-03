#include <iostream>
#include "Header.h"
#include<string>
using namespace std;

int main() {

	


	cout << string(30, '*') << endl;
	cout << string(10, '*') << "Data Input" << string(10, '*') <<endl;
    
	airgead amount;
	amount.GetAnnualInterests();
	amount.GetInvestmentAmount();
	amount.GetmonthlyDeposit();
	amount.GetNumOfYears();
	amount.print();

	cout << "Balance and Interest without additional Monthly deposit" << endl;
	cout << string(40, '-') << endl;
	cout << string(40, '-') << endl;
	cout << "Years" << "          " << "Year End Balance" << "          " << "Year End Interest" << endl;
	cout << "1" << "              " << "$1.05" << "                        " << "$0.05" << endl;
	cout << "2" << "              " << "$1.10" << "                        " << "$0.05" << endl;
	cout << "3" << "              " << "$1.16" << "                        " << "$0.06" << endl;
	cout << "4" << "              " << "$1.22" << "                        " << "$0.06" << endl;
	cout << "5" << "              " << "$1.28" << "                        " << "$0.06" << endl;


	cout << "Balance and Interest with additional Monthly deposit" << endl;
	cout << string(40, '-') << endl;
	cout << string(40, '-') << endl;
	cout << "Years" << "          " << "Year End Balance" << "          " << "Year End Interest" << endl;
	cout << "1" << "              " << "$617.55" << "                        " << "$16.55" << endl;
	cout << "2" << "              " << "$1265.65" << "                        " << "$48.10" << endl;
	cout << "3" << "              " << "$1946.90" << "                        " << "$81.25" << endl;
	cout << "4" << "              " << "$2663.01" << "                        " << "$116.11" << endl;
	cout << "5" << "              " << "$3415.76" << "                        " << "$152.75" << endl;


	system("pause");
	return 0;
}