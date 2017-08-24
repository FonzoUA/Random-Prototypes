#ifndef OVERLOADER
#define OVERLOADER


class Overloader
{
	int data;
public:
	// Default constr
	Overloader();
	// Copy constr
	Overloader(const Overloader& rhs);
	// Assignment operator
	Overloader& operator=(const Overloader& rhs);
	// Destructor
	~Overloader();
	
	// Specialized constr
	Overloader(const int &data);
	// Class + constant
	Overloader& operator+(const int& rhs);
	// constant + Class
	friend Overloader operator+(const int& lhs, const Overloader& rhs);
	// Class + Class
	Overloader& operator+(const Overloader& rhs);
	// Class += Class
	Overloader& operator+=(const Overloader& rhs);

	// Pre-increment
	Overloader& operator++();
	// Post-increment 
	Overloader& operator++(int);

	void PrintData();

};



#endif // !OVERLOADER
