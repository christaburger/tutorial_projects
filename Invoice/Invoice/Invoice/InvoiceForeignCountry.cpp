#include "stdafx.h"
#include "InvoiceForeignCountry.h"


InvoiceForeignCountry::InvoiceForeignCountry (std::string& name, std::string& address, int amount)
	:Invoice (name, address, amount)
{
}


InvoiceForeignCountry::~InvoiceForeignCountry ()
{
}
