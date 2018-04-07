#pragma once
#include "Invoice.h"
class InvoiceForeignCountry :
	public Invoice
{
public:
	InvoiceForeignCountry (std::string& name, std::string& address, int amount);
	~InvoiceForeignCountry ();
};

