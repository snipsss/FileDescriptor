#ifndef VALIDATOR
#define VALIDATOR
#include "Result.h"
#include <iostream>

struct ValidatorIpAddresses final
{
	static Result isValidIp(const std::string& address);
};



#endif // !VALIDATOR
