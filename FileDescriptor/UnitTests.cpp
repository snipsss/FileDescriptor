#ifndef TESTS
#define TESTS
#include "InterFaceDescriptor.h"
#include "Validator.h"
#include "UnitTests.h"
#include "InterFaceDescriptor.h"
#include "ConfigData.h"
#include "Result.h"
#define __FUNCTION1__ "openFile_OpenningFile_True"
#define __FUNCTION2__ "FileDescriptor_CheckingValidness_True_Or_False"


void UnitTests::openFile_OpenningFile_True() 
{
		bool* result1 = new bool(openFile(TestConfig::diskPathOnly));
		bool* result2 = new bool(openFile(TestConfig::pathname));
		bool* result3 = new bool(openFile(TestConfig::emptryPath));
		bool* result4 = new bool(openFile(mainData::filePath));
		std::cout << "Name: " << __FUNCTION1__ << "\t" << "Line: " << __LINE__ << std::endl;
		std::cout << "Testing method openFile() { class FileDescriptor } " << __LINE__ << std::endl;
		std::cout << "Test 1 for diskPathOnly result: " << *result1 << "\t" << "Line: " << __LINE__  << std::endl;
		std::cout << "Test 2 for randomPathName result: " << *result2 << "\t" << "Line: " << __LINE__ << std::endl;
		std::cout << "Test 3 for emptyPath result: "  << *result3 << "\t" << "Line: " << __LINE__ << std::endl;
		std::cout << "Test 4 for GoodPath result: " << *result4 << "\t" << "Line: " << __LINE__ << std::endl;

		delete result1;
		delete result2;
		delete result3;
		delete result4;
}


void UnitTests::FileDescriptor_CheckingValidness_True_Or_False()
{
	std::cout << " " << std::endl;
	bool* result1EmptyAddr = new bool(ValidatorIpAddresses::isValidIp(IpConfig::emptyAddr));
	bool* result2LocalAddr = new bool(ValidatorIpAddresses::isValidIp(IpConfig::localAddr));
	bool* result3ZeroAddr = new bool(ValidatorIpAddresses::isValidIp(IpConfig::zeroAddr));
	bool* result4SubnetMask = new bool(ValidatorIpAddresses::isValidIp(IpConfig::subnetMask));
	bool* result5Vver255Addr = new bool(ValidatorIpAddresses::isValidIp(IpConfig::over255Addr));
	bool* result6LongIpV6 = new bool(ValidatorIpAddresses::isValidIp(IpConfig::longIpV6));
	bool* result7Over255AllAddr = new bool(ValidatorIpAddresses::isValidIp(IpConfig::over255AllAddr));
	bool* result8OverThreeDigit = new bool(ValidatorIpAddresses::isValidIp(IpConfig::overThreeDigit));
	bool* result9RandomV6 = new bool(ValidatorIpAddresses::isValidIp(IpConfig::randomIpV6));

	std::cout << "Name: " << __FUNCTION__ << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 1 IpConfig::emptyAddr:  " << *result1EmptyAddr << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 2 IpConfig::localAddr: " << *result2LocalAddr << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 3 IpConfig::zeroAddr: " << *result3ZeroAddr << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 4 for IpConfig::subnetMask: " << *result4SubnetMask << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 5 IpConfig::over255Addr: " << *result5Vver255Addr << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 6 IpConfig::longIpV6: " << *result6LongIpV6 << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 7 IpConfig::over255AllAddr: " << *result7Over255AllAddr << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 8 IpConfig::overThreeDigit: " << *result8OverThreeDigit << "\t" << "Line: " << __LINE__ << std::endl;
	std::cout << "Test 9 IpConfig::randomIpV6: " << *result9RandomV6 << "\t" << "Line: " << __LINE__ << std::endl;

	delete result1EmptyAddr;
	delete result2LocalAddr;
	delete result3ZeroAddr;
	delete result4SubnetMask;
	delete result5Vver255Addr;
	delete result6LongIpV6;
	delete result7Over255AllAddr;
	delete result8OverThreeDigit;
	delete result9RandomV6;
}

#endif // !TESTS
