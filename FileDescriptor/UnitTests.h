#ifndef TESTING
#define TESTING
#include <iostream>
#include "InterFaceDescriptor.h"
#include "Validator.h"

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



class UnitTests : public  FileDescriptor
{
public:
	void openFile_OpenningFile_True();

};




#endif // !TESTING
