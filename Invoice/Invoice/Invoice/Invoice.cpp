#include "stdafx.h"
#include "Invoice.h"

#include <iostream>


Invoice::Invoice (std::string & name, std::string & address, int amount)
	: m_Name (name),
	m_Address (address),
	m_Amount (amount)
{
}

Invoice::~Invoice ()
{
}

void Invoice::print ()
{
	std::cout << "Name:" << m_Name << std::endl;
	std::cout << "Address:" << m_Address << std::endl;
	std::cout << "Amount: " << m_Amount << std::endl;
	std::cout << std::endl;
}

std::string Invoice::getAddress ()
{
	return m_Address;
}
