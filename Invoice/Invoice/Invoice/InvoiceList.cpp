#include "stdafx.h"
#include "InvoiceList.h"


InvoiceList::InvoiceList ()
{
	createInvoices ();
}


InvoiceList::~InvoiceList ()
{
}

void InvoiceList::print ()
{
	for (std::list<Invoice>::iterator itInvoice = m_Invoicelist.begin (); itInvoice != m_Invoicelist.end (); itInvoice++)
	{
		(*itInvoice).print ();
	}
}

void InvoiceList::createInvoices ()
{
	for (int i = 0; i < 10; i++)
	{
		Invoice* invoice = new Invoice (std::string("Name"), std::string("Address"), 5);
		m_Invoicelist.push_back (*invoice);
	}
}
