#include <iostream>
#include <cstdint>

uint8_t rotl(uint8_t bits) {
	return (bits << 1) | (bits >> 7);
}

uint8_t set(bool flag, uint8_t index, uint8_t copy) {
	if (flag) {
		uint8_t bits{ 1 };
		return (bits << index) | copy;
	}
	else {
		uint8_t bits{ 1 };
		return (~(bits << index)) & copy;
	}
}

bool get(char index, char copy) {
	char bits{ 1 };
	return (bits << index) & copy;
}

int main()
{
	char bits{ 2 };
	std::cout << get(1, bits) << '\n';
	return 0;
}