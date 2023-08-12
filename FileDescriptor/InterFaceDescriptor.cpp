#include "InterFaceDescriptor.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <ios>
#include <string>
#include "Validator.h"
#include <vector>
#include "Result.h"

bool FileDescriptor::openFile(const std::string& sFilePath)
{
    m_file.open(sFilePath, std::ios::app | std::ios::binary | std::ios::end);

    if(m_file.is_open())
    {
        std::cout << "file Succsessfully openned!" << std::endl;
    }
    else
    {
        std::cerr << "We cant find file path  or file does not exist! " << std::endl;   
        closeFile();
    }
    return true;
}

std::vector<std::string> FileDescriptor::readFile()
{
    std::string line;
    while (getline(m_file, line)) {
       // std::cout << line << std::endl;
        m_IpVector.push_back(line);
    }
    size_t vectIpSize = m_IpVector.size();
    std::cout << "Size vector is " << vectIpSize << std::endl;
    return m_IpVector;
}

bool FileDescriptor::writeInNewFile(const std::string& sNewPathFile)
{
    std::ofstream outPutFile(sNewPathFile, std::ios::out | std::ios::binary);
    std::cout << "size buffer<> is " << m_IpVector.size() << std::endl;
    for (std::string& str : m_IpVector) {
        str.erase(std::remove(std::begin(str), std::end(str), '\r'), str.end());
    }
    if (outPutFile.is_open())
    {
        std::cout << "newPathFile() exists and successfully openned!" << std::endl;
        
        for (std::vector<std::string>::const_iterator iter = m_IpVector.begin(); iter != m_IpVector.end(); iter++)
        {
            if (ValidatorIpAddresses::isValidIp(*iter) == Result::DesctriptorSuccess)
            {
                outPutFile << " ip is valid! -> " << "\t" << *iter << std::endl;
            }
            else
            {
                outPutFile << " ip is not valid -> " << "\t" << *iter << std::endl;
            }
        }
    }
    else
    {
        std::cerr << "We can't open or find your file! " << std::endl; 
    }
    outPutFile.close();
    return true;

}

Result FileDescriptor::closeFile()
{
    if (m_file.is_open())
    {
        m_file.close();
    }
    else
    {
        std::cerr << "We cant close the m_file" << std::endl;
    }
    return Result::DesctriptorSuccess;
}
