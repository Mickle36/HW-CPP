#include "counter.h"
#include <string>
#include <iostream>



Counter::Counter(int schet, std::string val)
{
	Counter::schetchik = schet;
	Counter::value = val;
}

void Counter::set_plus_schetchik()
{
	Counter::schetchik++;
}

void Counter::set_minus_schetchik()
{
	Counter::schetchik--;
}

void Counter::set_equals_schetchik()
{
	std::cout << "Counter value: " << Counter::schetchik << std::endl;
}