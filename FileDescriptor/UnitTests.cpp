#ifndef TESTS
#define TESTS

#include "InterFaceDescriptor.h"
#include "Validator.h"
#include "UnitTests.h"
#include "InterFaceDescriptor.h"

#define __FUNCTION__ "openFile_OpenningFile_True"

void UnitTests::openFile_OpenningFile_True() 
{
		bool* result1 = new bool(openFile(TestConfig::diskPathOnly));
		bool* result2 = new bool(openFile(TestConfig::pathname));
		bool* result3 = new bool(openFile(TestConfig::emptryPath));
		bool* result4 = new bool(openFile(mainData::filePath));
		std::cout << "Name: " << __FUNCTION__ << "\t" << "Line: " << __LINE__ << std::endl;
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





#endif // !TESTS
