#ifndef TESTING
#define TESTING
#include "InterFaceDescriptor.h"



class UnitTests : public  FileDescriptor
{
public:
	void openFile_OpenningFile_True();
	void FileDescriptor_CheckingValidness_True_Or_False();
};




#endif // !TESTING
