#include "InterFaceDescriptor.h"
#include <memory>

#include "UnitTests.h"




void callAllTest()
{
	std::shared_ptr<UnitTests> ptrTest(new UnitTests);
	ptrTest->openFile_OpenningFile_True();

}




void callFileDescriptor()
{
	
	
	
	/*{
		BaseDesctriptor* ptrBaseDesctriptor = new FileDescriptor;
		ptrBaseDesctriptor->openFile(filePath);
		ptrBaseDesctriptor->readFile();
		ptrBaseDesctriptor->writeInNewFile(OutPutFile);
		ptrBaseDesctriptor->closeFile();
		delete ptrBaseDesctriptor;
	}
	*/
	std::unique_ptr<BaseDesctriptor> ptr(new FileDescriptor);
	ptr->openFile(mainData::filePath);
	ptr->readFile();
	ptr->writeInNewFile(mainData::outputFile);
	ptr->closeFile();

}