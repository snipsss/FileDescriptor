#ifndef VALIDATOR
#define VALIDATOR
#include <iostream>

struct ValidatorIpAddresses
{
	static bool isValidPart(const std::string& address);
	static bool isValidIp(const std::string& address);
};



#endif // !VALIDATOR
