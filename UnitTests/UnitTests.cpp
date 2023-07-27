#include <iostream>
#include <vector>
template<typename T>
auto refer(const T& var) 
{
	//std::cout << var << std::endl;
	return var;
}
template<typename T >
auto refer2(T* arg) 
{
	return arg;
}

int main()
{
	auto x = 1;
	auto y = &x;
	auto z = x;

	auto t = &y;
	auto name = "abs is good! ";
	
	std::cout << refer(name) << std::endl;

	std::cout << *(refer2(y)) << std::endl;
	std::cout << *(refer2(&x)) << std::endl;

	auto xer  = { x };
	auto result = refer2(&x);
	
	std::cout << refer(31) << std::endl;
	std::cout << refer(x) << std::endl;
	std::cout << *(refer(y)) << std::endl;


	return 0;
	
}

