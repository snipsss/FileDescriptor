#ifndef PRECALLER
#define PRECALLER
#include "InterFaceDescriptor.h"
#include <memory>
#include "UnitTests.h"
#include "ConfigData.h"


void callAllTest()
{
	std::shared_ptr<UnitTests> ptrTest = std::make_unique<UnitTests>();
	ptrTest->openFile_OpenningFile_True();
	ptrTest->FileDescriptor_CheckingValidness_True_Or_False();
}

void callFileDescriptor()
{
	std::unique_ptr<BaseDesctriptor> ptrCallFuction = std::make_unique<FileDescriptor>();
	ptrCallFuction->openFile(mainData::filePath);
	ptrCallFuction->readFile();
	ptrCallFuction->writeInNewFile(mainData::outputFile);
	ptrCallFuction->closeFile();
}


#endif