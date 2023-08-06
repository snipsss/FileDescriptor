#include "InterFaceDescriptor.h"

int callFileDescriptor()
{
	{
		BaseDesctriptor* ptrBaseDesctriptor = new FileDescriptor;
		std::string filePath = "/home/valeriikupriianov/Desktop/descriptorLinux/FileDescriptor/ipList.txt";
		std::string OutPutFile = "/home/valeriikupriianov/Desktop/descriptorLinux/FileDescriptor/outputFile.txt";
		ptrBaseDesctriptor->openFile(filePath);
		ptrBaseDesctriptor->readFile();
		ptrBaseDesctriptor->writeInNewFile(OutPutFile);
		ptrBaseDesctriptor->closeFile();
		delete ptrBaseDesctriptor;
	}
	return 0;
}