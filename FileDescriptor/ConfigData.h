#ifndef CFG
#define CFG

#include <iostream>
namespace TestConfig
{
	static std::string pathname = "C:\\Users\\acer\\Desktop\\new skaaaaaaaatteeeee\\config tg bot";
	static std::string emptryPath = "";
	static std::string diskPathOnly = "C:\\random.txt";
	static const char* pathNameChar = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\FileDescriptor\\output.txt";

}

namespace mainData
{
	static std::string filePath = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\ipList.txt";
	static std::string outputFile = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\FileDescriptor\\output.txt";
}

namespace IpConfig
{
	static std::string emptyAddr = "";
	static std::string zeroAddr = "0.0.0.0";
	static std::string localAddr = "127.0.0.1";
	static std::string over255Addr = "256.0.0.0";
	static std::string subnetMask = "255.255.255.0";
	static std::string over255AllAddr = "256.899.400.500";
	static std::string overThreeDigit = "1444.331.3313.1111";
	static std::string randomIpV6 = "2607:f0d0:1002:51::4";
	static std::string longIpV6 = "2607:f0d0:1002:0051:0000:0000:0000:0004";
}



#endif // !CFG
