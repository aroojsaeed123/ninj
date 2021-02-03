#include <iostream>
using namespace std;

#include "Header.h"

//default constructor
airgead::airgead() {

}

//constructor with parameters
void airgead::SetInvestmentAmount(double amount) {
	InvestmentAmount = amount;
}

 double airgead::GetInvestmentAmount()  {
	 //amount = InvestmentAmount;
	 return InvestmentAmount;
}

 void airgead::SetmonthlyDeposit(double deposit) {
	 monthlyDeposit = deposit;
 }

 double airgead::GetmonthlyDeposit() {
	 return monthlyDeposit;
}

 void airgead::SetAnnualInterests(float Interests) {
	 AnnualInterests = Interests;
 }

 float airgead::GetAnnualInterests() {
	 return AnnualInterests;
}

 void airgead::SetNumOfYears(int years) {
	 NumOfYears = years;
 }
 
 int airgead::GetNumOfYears() {
	 return NumOfYears;
}

void airgead::print() const{
	cout << "InvestmentAmount: $" << InvestmentAmount << endl;
	cout << "monthlyDeposit: $" << monthlyDeposit << endl;
	cout << "AnnualInterests: %" << AnnualInterests << endl;
	cout << "NumOfYears: " << NumOfYears << endl;
	
}