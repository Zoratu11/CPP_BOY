#pragma once

#include <stdint.h>
#include <vector>

class MMU
{
private:
	std::vector<uint8_t> cartridgeRom;
	std::vector<uint8_t> videoRam;
	std::vector<uint8_t> externalRam;
	std::vector<uint8_t> workRam;
	std::vector<uint8_t> echoRam;
	std::vector<uint8_t> oam;
	std::vector<uint8_t> zram;
	std::vector<uint8_t> highRam;

public:
	uint16_t ReadWord(uint16_t address);
	uint8_t ReadByte(uint16_t address);
	void WriteByte(uint16_t address, uint8_t value);
	void WriteWord(uint16_t address, uint8_t value);

};