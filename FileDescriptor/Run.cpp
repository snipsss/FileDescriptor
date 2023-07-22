#include "InterFaceDescriptor.h"

int callFileDescriptor()
{
	{
		BaseDesctriptor* ptrBaseDesctriptor = new FileDescriptor;
		std::string filePath = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\ipList.txt";
		std::string OutPutFile = "C:\\Users\\acer\\source\\repos\\FileDescriptor\\FileDescriptor\\output.txt";
		ptrBaseDesctriptor->openFile(filePath);
		ptrBaseDesctriptor->readFile();
		ptrBaseDesctriptor->writeInNewFile(OutPutFile);
		ptrBaseDesctriptor->closeFile();
		delete ptrBaseDesctriptor;
	}
	return 0;
}