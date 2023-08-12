#include "Validator.h"
#include <sstream>
#include <boost/asio.hpp>
#include "Result.h"
#include <iostream>
Result ValidatorIpAddresses::isValidIp(const std::string& address)
{
	boost::system::error_code ec;
	boost::asio::ip::address::from_string(address, ec);
	if (ec)
	{
		std::cerr << ec.message() << std::endl;
	}
	return Result::DesctriptorSuccess;
}