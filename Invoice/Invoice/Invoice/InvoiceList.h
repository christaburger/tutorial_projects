#pragma once
#include <list>

#include "Invoice.h"

class InvoiceList
{
public:
	InvoiceList ();
	~InvoiceList ();

public:
	void print ();

private:
	void createInvoices ();

private:
	std::list<Invoice> m_Invoicelist;
};

