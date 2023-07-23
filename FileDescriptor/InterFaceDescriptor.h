#ifndef DESCRIPTOR
#define DESCRIPTOR
#include <iostream>
#include <vector>
#include <fstream>

struct BaseDesctriptor
{
	virtual bool openFile(std::string& filepath) = 0;
	virtual std::vector<std::string> readFile() = 0;
	virtual bool writeInNewFile(std::string& newPathFile) = 0;
	virtual bool closeFile() = 0;
	virtual ~BaseDesctriptor(){};
};

class FileDescriptor: public BaseDesctriptor
{
private:
	std::vector<std::string> m_IpVector;
    std::ifstream m_file;
public: 
	FileDescriptor() = default;
	FileDescriptor(const FileDescriptor& other) = delete;
	FileDescriptor& operator = (const FileDescriptor other) = delete;
	virtual ~FileDescriptor(){};

	bool openFile(std::string& filepath) override;
	std::vector<std::string> readFile() override;
	bool writeInNewFile(std::string& newPathFile) override;
	bool closeFile() override;
	
};


#endif // !DESCRIPTOR
