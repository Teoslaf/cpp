#include "Serializer.hpp"

int main()
{
	Data data;
	data.value = 42;

	Serializer serializer;
	uintptr_t serializedData = serializer.serialize(&data);

	Data *deserializedData = serializer.deserialize(serializedData);

	std::cout << "deserializedData : value: " << deserializedData->value << std::endl;
	return 0;
}
