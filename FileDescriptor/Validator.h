#ifndef VALIDATOR
#define VALIDATOR
#include "Result.h"
#include <iostream>


struct ValidatorIpAddresses 
{
	 static Result isValidIp(const std::string& address);
};



#endif // !VALIDATOR
