#ifndef TESTING
#define TESTING
#include <iostream>
#include "InterFaceDescriptor.h"
#include "Validator.h"



class UnitTests : public  FileDescriptor
{
public:
	void openFile_OpenningFile_True();
	void FileDescriptor_CheckingValidness_True_Or_False();

};




#endif // !TESTING
