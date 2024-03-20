#include "Serializer.hpp"

int main()
{
	Data data;
	data.value = 1;

	uintptr_t s = Serializer::serialize(&data);
	Data *anotherData = Serializer::deserialize(s);
	
	std::cout << s << std::endl;
	std::cout << anotherData << std::endl;
	return (0);
}
