#ifndef CFG
#define CFG

#include <iostream>
#include <vector>
namespace TestConfig
{
	const std::string pathname = "C:\\Users\\acer\\Desktop\\new skaaaaaaaatteeeee\\config tg bot";
	const std::string emptryPath = "";
	const std::string diskPathOnly = "C:\\random.txt";
	const std::string pathNameChar = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\FileDescriptor\\output.txt";

}

namespace mainData
{
	const std::string filePath = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\ipList.txt";
	const std::string outputFile = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\FileDescriptor\\output.txt";
}

namespace IpConfig
{
	const std::string emptyAddr = "";
	const std::string zeroAddr = "0.0.0.0";
	const std::string localAddr = "127.0.0.1";
	const std::string over255Addr = "256.0.0.0";
	const std::string subnetMask = "255.255.255.0";
	const std::string over255AllAddr = "256.899.400.500";
	const std::string overThreeDigit = "1444.331.3313.1111";
	const std::string randomIpV6 = "2607:f0d0:1002:51::4";
	const std::string longIpV6 = "2607:f0d0:1002:0051:0000:0000:0000:0004";
}



#endif // !CFG
