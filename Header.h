#ifndef HEADER_H
#define HEADER_H


class airgead
{
private:
	double InvestmentAmount;
	double monthlyDeposit;
	float AnnualInterests;
	int NumOfYears;

public:
	airgead();
	void SetInvestmentAmount(double amount);
	double GetInvestmentAmount();
	void SetmonthlyDeposit(double deposit);
	double GetmonthlyDeposit();
	void SetAnnualInterests(float Interests);
	float GetAnnualInterests();
	void SetNumOfYears(int years);
	int GetNumOfYears();
	void print()const;





};
#endif