#ifndef DESCRIPTOR
#define DESCRIPTOR
#include <iostream>
#include <vector>
#include <fstream>
#include "Result.h"
#include "Validator.h"

class BlockCopy
{
public:
	BlockCopy() = default;
	BlockCopy(const BlockCopy& other) = delete;
	BlockCopy& operator = (const BlockCopy& other) = delete;
	BlockCopy(const BlockCopy&& other) = delete;
	BlockCopy& operator = (const BlockCopy&& other) = delete;
};

struct BaseDesctriptor: public BlockCopy
{
	BaseDesctriptor() = default;
	virtual bool openFile(const std::string& filepath) = 0;
	virtual std::vector<std::string> readFile() = 0;
	virtual bool writeInNewFile(const std::string& newPathFile) = 0;
	virtual Result closeFile() = 0;
	virtual ~BaseDesctriptor(){};
};

class FileDescriptor: public BaseDesctriptor
{
private:
	std::vector<std::string> m_IpVector;
    std::ifstream m_file;
public:
	FileDescriptor() = default;
	bool openFile(const std::string& filepath) override;
	std::vector<std::string> readFile() override;
	bool writeInNewFile(const std::string& newPathFile) override;
	Result closeFile() override;
	

	virtual ~FileDescriptor() {};
};


#endif // !DESCRIPTOR
