#pragma once

#include <string>

class Invoice
{
public:
	Invoice (std::string& name, std::string& address, int amount);
	~Invoice ();

	void print ();
	virtual std::string getAddress ();

private: 
	std::string m_Name;
	std::string m_Address;
	int m_Amount;

};

