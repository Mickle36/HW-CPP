#pragma once

class Counter
{
public:

	Counter(int schet, std::string val);

	void set_plus_schetchik();

	void set_minus_schetchik();

	void set_equals_schetchik();


protected:
	int schetchik = 0;
	std::string value;

};