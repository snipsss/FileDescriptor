#include "Validator.h"
#include <sstream>
#include <boost/asio.hpp>


bool ValidatorIpAddresses::isValidIp(const std::string& address)
{
	boost::system::error_code ec;
	boost::asio::ip::address::from_string(address, ec);
	if (ec)
	{
		std::cerr << ec.message() << std::endl;
		return false;
	}
	return true;
}