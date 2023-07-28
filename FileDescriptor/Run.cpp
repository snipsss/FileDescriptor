#include "InterFaceDescriptor.h"
#include <memory>

#include "UnitTests.h"
#include "ConfigData.h"




void callAllTest()
{
	std::shared_ptr<UnitTests> ptrTest(new UnitTests);
	ptrTest->openFile_OpenningFile_True();
	ptrTest->FileDescriptor_CheckingValidness_True_Or_False();
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