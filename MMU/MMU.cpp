#include "MMU.h"

uint8_t MMU::ReadByte(uint16_t address)
{
	switch (address & 0xF000)
	{
	case 0x0000:
	case 0x1000:
	case 0x2000:
	case 0x3000:
		return cartridgeRom[address];

	case 0x4000:
	case 0x5000:
	case 0x6000:
	case 0x7000:
		return cartridgeRom[address];	//this is not correct but its a placeholder for now

	case 0x8000:
	case 0x9000:
		return videoRam[address];

	case 0xA000:
	case 0xB000:
		return externalRam[address];	//not done yet

	case 0xC000:
	case 0xD000:
	case 0xE000:
		return workRam[address];

	case 0xF000:
		//implement rest of this soon

	}
}
