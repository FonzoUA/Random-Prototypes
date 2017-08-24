#include "Overloader.h"
#include <stdio.h>

#define PRINT_STATEMENTS 1

// Default constr
Overloader::Overloader()
	:data(0)
{
#if PRINT_STATEMENTS 
	printf("+->Called default constructor\n");
#endif
}

// Specialized constr
Overloader::Overloader(const int& val)
	: data(val)
{
#if PRINT_STATEMENTS 
	printf("+->Called specialized constructor\n");
#endif
}

// Copy constructor
Overloader::Overloader(const Overloader& rhs)
{
	data = rhs.data;

#if PRINT_STATEMENTS 
	printf("+->Called copy constructor\n");
#endif
}

// Asignment operator
Overloader& Overloader::operator=(const Overloader& rhs)
{
#if PRINT_STATEMENTS 
	printf("+->Called assignment operator\n");
#endif

	if (&rhs == this)
		return *this;
	this->data = rhs.data;
	return *this;
}

// Destructor
Overloader::~Overloader()
{
#if PRINT_STATEMENTS 
	printf("+->Called destructor\n");
#endif
}

// Class + constant
Overloader& Overloader::operator+(const int& rhs)
{
#if PRINT_STATEMENTS 
	printf("->Called operator+ <Class + constant>\n");
#endif
	this->data += rhs;
	return *this;
}

// Constant + Class
Overloader operator+(const int& lhs, const Overloader& rhs)
{
#if PRINT_STATEMENTS 
	printf("->Called operator+ <constant + Class>\n");
#endif
	return (lhs + rhs.data);
}

// Class + Class
Overloader& Overloader::operator+(const Overloader& rhs)
{
#if PRINT_STATEMENTS 
	printf("->Called operator+ <Class + Class>\n");
#endif
	this->data += rhs.data;
	return *this;
}

// Class += Class
Overloader& Overloader::operator+=(const Overloader& rhs)
{
#if PRINT_STATEMENTS 
	printf("->Called operator+ <Class += Class>\n");
#endif
	this->data += rhs.data;
	return *this;
}

// Pre-Increment
Overloader& Overloader::operator++()
{
#if PRINT_STATEMENTS 
	printf("->Called Pre-Increment\n");
#endif
	++(this->data);
	return *this;
}

// Post-Increment
Overloader& Overloader::operator++(int)
{
#if PRINT_STATEMENTS 
	printf("->Called Post-Increment\n");
#endif
	Overloader temp(*this);
	++(*this);
	return temp;
}

void Overloader::PrintData()
{
	printf("Data:[%i]\n", data);
}